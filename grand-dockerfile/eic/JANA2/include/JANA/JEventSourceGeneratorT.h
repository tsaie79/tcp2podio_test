
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.

#include <string>

#include <JANA/JEventSourceGenerator.h>
#include <JANA/Utils/JTypeInfo.h>

class JApplication;

/// This templated class is used to generate JEventSource based objects
/// to handle reading events into JANA. Multiple JEventSourceGenerator
/// objects may exist in a given program, each representing a different
/// input type. For example, one source may be used to read raw data
/// while another may be used to read DST formats. A third may be used
/// to read from a network connection for online applications. For each
/// source specified in a given job, JANA will determine which JEventSource
/// class to use to read from it. It does this via the CheckOpenable method
/// of JEventSourceSourceGenerator.
///
/// A new instance of the JEventSource subclass will be created for each
/// input source in the job. For example, if two files of the same type,
/// are specified then the JEventSourceGenerator corresponding to that
/// file type will be used to create two JEventSource objects.
///
/// REQUIREMENTS OF JEventSource SUBCLASS:
/// --------------------------------------
///   - constructor that accepts (std::string, JApplication*)
///   - static std::string GetDescription(void) method
///
///
/// NOTE ON CheckOpenable:
/// --------------------------------------
/// 	This method should "peek" at the source to see if it is one that
/// 	it can open. It should return a value between 0 and 1 inclusive
/// 	with 0 meaning "cannot open" and 1 meaning "absolutely can open".
/// 	The check can be as simple as looking at the source name (e.g.
/// 	does it have a specific suffix) or more involved (e.g. opening
/// 	the file and checking for a magic header). Note that it should
/// 	not be assumed that the source represents a file name. It could
/// 	indicate a URL or how to connect to some other non-file source.
///

#ifndef _JEventSourceGeneratorT_h_
#define _JEventSourceGeneratorT_h_

template <typename T>
class JEventSourceGeneratorT:public JEventSourceGenerator{
    public:

        JEventSourceGeneratorT(JApplication *app=nullptr):JEventSourceGenerator(app){}
        virtual ~JEventSourceGeneratorT(){}

        /// Return name of the source type this will generate
        std::string GetType(void) const {
            return JTypeInfo::demangle<T>();
        }

        /// Return description of the source type this will generate
        std::string GetDescription(void) const { return T::GetDescription(); }

        /// Create an instance of the source type this generates
        JEventSource* MakeJEventSource( std::string source ){ return new T( source, mApplication ); }

        /// Check how likely a source of the type this generates is to read
        /// the specified source. This mechanism is to allow a single executable
        /// to read from multiple file types, each corresponding to a different
        /// JEventSource subclass. If you use only a single source type, then
        /// there is no need to override this. If you do need this functionality
        /// however, then override this in your code with something like:
        ///
        ///   template<> double JEventSourceGeneratorT<MyType>::CheckOpenable(std::string source) { ... }
        ///
        double CheckOpenable( std::string /* source */ ){ return 0.01; }

    protected:

        /// This is called by JEventSourceManager::AddJEventSourceGenerator which
        /// itself is called by JApplication::Add(JEventSourceGenerator*). There
        /// should be no need to call it from anywhere else.
        void SetJApplication(JApplication *app){ mApplication = app; }
};

#endif // _JEventSourceGeneratorT_h_

