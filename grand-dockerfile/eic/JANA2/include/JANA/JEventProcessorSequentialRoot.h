
#ifndef _JEventProcessorSequentialRoot_h_
#define _JEventProcessorSequentialRoot_h_

#include <mutex>

#include <JANA/JEventProcessor.h>
#include <JANA/Services/JGlobalRootLock.h>

/// This class can be used to safely implement sequential code while ensuring
/// the factory algorithms are run in parallel using the JANA ROOT lock.
///
/// n.b. If you need to run sequentially, but for reasons other than ROOT,
/// then please look at the JEventProcessorSequential class.
///
/// This is a specialized version of JEventProcessor that allows data types
/// that will be needed to be specified in the subclass definition. The
/// types will be prefetched via event->Get() calls and then a mutex locked
/// prior to calling the ProcessSequential method. The types are specified
/// by adding PrefetchT data members to the class as illustrated in the
/// example below.
///
/// Note that this will automatically lock the
///
/// class DaveTestProcessor: public JEventProcessorSequentialRoot {
///
///  public:
///
///  	// These declare object types that should be automatically fetched
///  	// from the event before ProcessSequential is called.
///  	PrefetchT<Hit>     hits     = {this};
///  	PrefetchT<Cluster> clusters = {this, "MyTag"};
///
///  	// This will be run sequentially
///     void ProcessSequential(const std::shared_ptr<const JEvent>& event) override {
///
///         // Do NOT call event->Get() here!
///
///  		// The hits and clusters objects will already be filled by calls
///  		// to event->Get(). Just use them here via their operator().
///  		for( auto h : hits() ){
///  			// h is const Hit*
///  		}
///     }
///
///  	// Boilerplate stuff
///  	DaveTestProcessor() { SetTypeName(NAME_OF_THIS); }
///  	void Init() override {}
///  	void Finish() override {}
///  };
///
class JEventProcessorSequentialRoot : public JEventProcessor {
    // This works in the following way:
    //
    // Two utility classes are defined here: Prefetch and PrefetchT with the
    // latter being a template. Subclasses can add any number of data members
    // of type PrefetchT. Using initializers, a list of the Prefetch members
    // is stored in the JEventProcessorSequentialRoot object itself.
    //
    // The Process method here loops over the Prefetch members calling
    // event->Get() for each and storing the resulting vector<const *T>
    // in the Prefetch member object. It then locks its own mutex before
    // calling ProcessSequential().
    //
    // The Process method is defined here and marked as "final" so subclasses
    // may not overide it. Instead, a new virtual method, ProcessSequential,
    // is added that the user may override.
    //
    // The tricky business here is capturing a list of the Prefetch data
    // members so they can be looped over at run time. Thus, the strange syntax
    // of passing the "this" argument to the PrefetchT constructors.
    // Similarly, each Prefetch object passes its "this" pointer back to the
    // JEventProcessorSequentialRoot object that owns it.

public:

    JEventProcessorSequentialRoot() {}
    virtual ~JEventProcessorSequentialRoot() = default;

    // non-templated base class
    class Prefetch {
    public:
        virtual void Get(const std::shared_ptr<const JEvent> &event) = 0;
        virtual void Fill(const std::shared_ptr<const JEvent> &event) = 0;
    };

    // typed class
    template<typename T>
    class PrefetchT : public Prefetch {
    public:
        // This constructor gets called by the {this} initializer for the data member.
        PrefetchT(JEventProcessorSequentialRoot *jeps, const std::string &tag = "") : mTag(
                tag) { jeps->mPrefetch.push_back(this); }

        std::vector<const T*> &operator()() { return mObjs; }
        void Get(const std::shared_ptr<const JEvent> &event) { event->Get<T>(mTag); }
        void Fill(const std::shared_ptr<const JEvent> &event) { mObjs = event->Get<T>(mTag); }

    private:
        PrefetchT() = default; // user must pass "this" so member can be added to our mPrefetch

        std::string mTag;
        std::vector<const T *> mObjs;
    };


    // JEventProcessorSequentialRoot takes control of Init, Finish, and Process. The user overrides
    // ProcessSequential, InitWithGlobalRootLock, and FinishWithGlobalRootLock instead.

    void Init() final {
        mGlobalWriteLock = GetApplication()->GetService<JGlobalRootLock>();
        mGlobalWriteLock->acquire_write_lock();
        try {
            InitWithGlobalRootLock();
            mGlobalWriteLock->release_lock();
        }
        catch (...) {
            mGlobalWriteLock->release_lock();
            // Ideally we'd use the STL read-write lock (std::shared_mutex/lock) intead of the pthreads one.
            // However for now we are limited to C++14 (we would need C++17).
            throw;
            // It is important to re-throw exceptions so that the framework can handle them correctly
        }
    };

    void Finish() final {
        mGlobalWriteLock->acquire_write_lock();
        try {
            FinishWithGlobalRootLock();
            mGlobalWriteLock->release_lock();
        }
        catch (...) {
            mGlobalWriteLock->release_lock();
            // Ideally we'd use the STL read-write lock (std::shared_mutex/lock) intead of the pthreads one.
            // However for now we are limited to C++14 (we would need C++17).
            throw;
            // It is important to re-throw exceptions so that the framework can handle them correctly
        }
    };

    void Process(const std::shared_ptr<const JEvent> &event) override final {
        for (auto p: mPrefetch) p->Get(event);  // make sure all factories have been activated

        std::lock_guard<std::mutex> lock(mFillMutex);
        for (auto p: mPrefetch) p->Fill(event); // Copy object pointers into members
        ProcessSequential(event);
    }

    // These are what the user implements (in lieu of Process, Init, and Finish)

    virtual void ProcessSequential(const std::shared_ptr<const JEvent>&) {};

    virtual void InitWithGlobalRootLock() {};

    virtual void FinishWithGlobalRootLock() {};

private:

    std::vector<Prefetch *> mPrefetch;
    std::shared_ptr<JGlobalRootLock> mGlobalWriteLock;
    std::mutex mFillMutex; // We don't need the global root lock to fill a histogram as long as all reads and writes happen inside ProcessSequential!
};


#endif // _JEventProcessorSequentialRoot_h_

