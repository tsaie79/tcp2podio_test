// Copyright 2023, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.
// Created by Nathan Brei

#pragma once

/**
 * Omnifactories are a lightweight layer connecting JANA to generic algorithms
 * It is assumed multiple input data (controlled by input tags)
 * which might be changed by user parameters.
 */

#include <JANA/JMultifactory.h>
#include <JANA/Omni/JHasInputs.h>
#include <JANA/JEvent.h>

#include <JANA/JLogger.h>
#include <JANA/Services/JLoggingService.h>

#include <string>
#include <vector>


struct EmptyConfig {};

template <typename AlgoT, typename ConfigT=EmptyConfig>
class JOmniFactory : public JMultifactory, public jana::omni::JHasInputs {
public:

    /// =========================
    /// Handle output collections
    /// =========================

    struct OutputBase {
        std::string type_name;
        std::vector<std::string> collection_names;
        bool is_variadic = false;

        virtual void CreateHelperFactory(JOmniFactory& fac) = 0;
        virtual void SetCollection(JOmniFactory& fac) = 0;
        virtual void Reset() = 0;
    };

    template <typename T>
    class Output : public OutputBase {
        std::vector<T*> m_data;

    public:
        Output(JOmniFactory* owner, std::string default_tag_name="") {
            owner->RegisterOutput(this);
            this->collection_names.push_back(default_tag_name);
            this->type_name = JTypeInfo::demangle<T>();
        }

        std::vector<T*>& operator()() { return m_data; }

    private:
        friend class JOmniFactory;

        void CreateHelperFactory(JOmniFactory& fac) override {
            fac.DeclareOutput<T>(this->collection_names[0]);
        }

        void SetCollection(JOmniFactory& fac) override {
            fac.SetData<T>(this->collection_names[0], this->m_data);
        }

        void Reset() override { }
    };


#ifdef JANA2_HAVE_PODIO
    template <typename PodioT>
    class PodioOutput : public OutputBase {

        std::unique_ptr<typename PodioTypeMap<PodioT>::collection_t> m_data;

    public:

        PodioOutput(JOmniFactory* owner, std::string default_collection_name="") {
            owner->RegisterOutput(this);
            this->collection_names.push_back(default_collection_name);
            this->type_name = JTypeInfo::demangle<PodioT>();
        }

        std::unique_ptr<typename PodioTypeMap<PodioT>::collection_t>& operator()() { return m_data; }

    private:
        friend class JOmniFactory;

        void CreateHelperFactory(JOmniFactory& fac) override {
            fac.DeclarePodioOutput<PodioT>(this->collection_names[0]);
        }

        void SetCollection(JOmniFactory& fac) override {
            if (m_data == nullptr) {
                throw JException("JOmniFactory: SetCollection failed due to missing output collection '%s'", this->collection_names[0].c_str());
                // Otherwise this leads to a PODIO segfault
            }
            fac.SetCollection<PodioT>(this->collection_names[0], std::move(this->m_data));
        }

        void Reset() override {
            m_data = std::move(std::make_unique<typename PodioTypeMap<PodioT>::collection_t>());
        }
    };


    template <typename PodioT>
    class VariadicPodioOutput : public OutputBase {

        std::vector<std::unique_ptr<typename PodioTypeMap<PodioT>::collection_t>> m_data;

    public:

        VariadicPodioOutput(JOmniFactory* owner, std::vector<std::string> default_collection_names={}) {
            owner->RegisterOutput(this);
            this->collection_names = default_collection_names;
            this->type_name = JTypeInfo::demangle<PodioT>();
            this->is_variadic = true;
        }

        std::vector<std::unique_ptr<typename PodioTypeMap<PodioT>::collection_t>>& operator()() { return m_data; }

    private:
        friend class JOmniFactory;

        void CreateHelperFactory(JOmniFactory& fac) override {
            for (auto& coll_name : this->collection_names) {
                fac.DeclarePodioOutput<PodioT>(coll_name);
            }
        }

        void SetCollection(JOmniFactory& fac) override {
            if (m_data.size() != this->collection_names.size()) {
                throw JException("JOmniFactory: VariadicPodioOutput SetCollection failed: Declared %d collections, but provided %d.", this->collection_names.size(), m_data.size());
                // Otherwise this leads to a PODIO segfault
            }
            size_t i = 0;
            for (auto& coll_name : this->collection_names) {
                fac.SetCollection<PodioT>(coll_name, std::move(this->m_data[i++]));
            }
        }

        void Reset() override {
            m_data.clear();
            for (auto& coll_name : this->collection_names) {
                m_data.push_back(std::make_unique<typename PodioTypeMap<PodioT>::collection_t>());
            }
        }
    };
#endif

    void RegisterOutput(OutputBase* output) {
        m_outputs.push_back(output);
    }


public:
    std::vector<OutputBase*> m_outputs;

private:
    /// Current logger
    JLogger m_logger;

    /// Configuration
    ConfigT m_config;

public:

    size_t FindVariadicCollectionCount(size_t total_input_count, size_t variadic_input_count, size_t total_collection_count, bool is_input) {

        size_t variadic_collection_count = total_collection_count - (total_input_count - variadic_input_count);

        if (variadic_input_count == 0) {
            // No variadic inputs: check that collection_name count matches input count exactly
            if (total_input_count != total_collection_count) {
                throw JException("JOmniFactory '%s': Wrong number of %s collection names: %d expected, %d found.",
                                m_prefix.c_str(), (is_input ? "input" : "output"), total_input_count, total_collection_count);
            }
        }
        else {
            // Variadic inputs: check that we have enough collection names for the non-variadic inputs
            if (total_input_count-variadic_input_count > total_collection_count) {
                throw JException("JOmniFactory '%s': Not enough %s collection names: %d needed, %d found.",
                                m_prefix.c_str(), (is_input ? "input" : "output"), total_input_count-variadic_input_count, total_collection_count);
            }

            // Variadic inputs: check that the variadic collection names is evenly divided by the variadic input count
            if (variadic_collection_count % variadic_input_count != 0) {
                throw JException("JOmniFactory '%s': Wrong number of %s collection names: %d found total, but %d can't be distributed among %d variadic inputs evenly.",
                                m_prefix.c_str(), (is_input ? "input" : "output"), total_collection_count, variadic_collection_count, variadic_input_count);
            }
        }
        return variadic_collection_count;
    }

    inline void PreInit(std::string tag,
                        std::vector<std::string> default_input_collection_names,
                        std::vector<std::string> default_output_collection_names ) {

        // TODO: NWB: JMultiFactory::GetTag,SetTag are not currently usable
        m_prefix = (this->GetPluginName().empty()) ? tag : this->GetPluginName() + ":" + tag;

        // Obtain collection name overrides if provided.
        // Priority = [JParameterManager, JOmniFactoryGenerator]
        m_app->SetDefaultParameter(m_prefix + ":InputTags", default_input_collection_names, "Input collection names");
        m_app->SetDefaultParameter(m_prefix + ":OutputTags", default_output_collection_names, "Output collection names");

        // Figure out variadic inputs
        size_t variadic_input_count = 0;
        for (auto* input : m_inputs) {
            if (input->is_variadic) {
               variadic_input_count += 1;
            }
        }
        size_t variadic_input_collection_count = FindVariadicCollectionCount(m_inputs.size(), variadic_input_count, default_input_collection_names.size(), true);

        // Set input collection names
        size_t i = 0;
        for (auto* input : m_inputs) {
            input->collection_names.clear();
            if (input->is_variadic) {
                for (size_t j = 0; j<(variadic_input_collection_count/variadic_input_count); ++j) {
                    input->collection_names.push_back(default_input_collection_names[i++]);
                }
            }
            else {
                input->collection_names.push_back(default_input_collection_names[i++]);
            }
        }

        // Figure out variadic outputs
        size_t variadic_output_count = 0;
        for (auto* output : m_outputs) {
            if (output->is_variadic) {
               variadic_output_count += 1;
            }
        }
        size_t variadic_output_collection_count = FindVariadicCollectionCount(m_outputs.size(), variadic_output_count, default_output_collection_names.size(), true);

        // Set output collection names and create corresponding helper factories
        i = 0;
        for (auto* output : m_outputs) {
            output->collection_names.clear();
            if (output->is_variadic) {
                for (size_t j = 0; j<(variadic_output_collection_count/variadic_output_count); ++j) {
                    output->collection_names.push_back(default_output_collection_names[i++]);
                }
            }
            else {
                output->collection_names.push_back(default_output_collection_names[i++]);
            }
            output->CreateHelperFactory(*this);
        }

        // Obtain logger
        //m_logger = m_app->GetService<Log_service>()->logger(m_prefix);
        m_logger = m_app->GetService<JLoggingService>()->get_logger(m_prefix);

        // Configure logger. Priority = [JParameterManager, system log level]
        // std::string default_log_level = eicrecon::LogLevelToString(m_logger->level());
        // m_app->SetDefaultParameter(m_prefix + ":LogLevel", default_log_level, "LogLevel: trace, debug, info, warn, err, critical, off");
        // m_logger->set_level(eicrecon::ParseLogLevel(default_log_level));
    }

    void Init() override {
        for (auto* parameter : m_parameters) {
            parameter->Configure(*(m_app->GetJParameterManager()), m_prefix);
        }
        for (auto* service : m_services) {
            service->Init(m_app);
        }
        static_cast<AlgoT*>(this)->Configure();
    }

    void BeginRun(const std::shared_ptr<const JEvent>& event) override {
        for (auto* resource : m_resources) {
            resource->ChangeRun(event->GetRunNumber(), m_app);
        }
        static_cast<AlgoT*>(this)->ChangeRun(event->GetRunNumber());
    }

    void Process(const std::shared_ptr<const JEvent> &event) override {
        try {
            for (auto* input : m_inputs) {
                input->GetCollection(*event);
            }
            for (auto* output : m_outputs) {
                output->Reset();
            }
            static_cast<AlgoT*>(this)->Execute(event->GetRunNumber(), event->GetEventNumber());
            for (auto* output : m_outputs) {
                output->SetCollection(*this);
            }
        }
        catch(std::exception &e) {
            throw JException(e.what());
        }
    }

    using ConfigType = ConfigT;

    /// Retrieve reference to already-configured logger
    //std::shared_ptr<spdlog::logger> &logger() { return m_logger; }
    JLogger& logger() { return m_logger; }

    /// Retrieve reference to embedded config object
    ConfigT& config() { return m_config; }

};
