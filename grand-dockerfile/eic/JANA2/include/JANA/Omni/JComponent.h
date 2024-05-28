
// Copyright 2024, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.
// Created by Nathan Brei

#pragma once
#include <JANA/JApplication.h>

namespace jana {
namespace omni {


struct JComponent {
    enum class Status { Uninitialized, Initialized, Finalized };
    enum class CallbackStyle { Compatibility, Classic, Declarative };

protected:

    struct ParameterBase;
    struct ServiceBase;

    std::vector<ParameterBase*> m_parameters;
    std::vector<ServiceBase*> m_services;
    
    JEventLevel m_level = JEventLevel::Event;
    CallbackStyle m_callback_style = CallbackStyle::Compatibility;
    std::string m_prefix;
    std::string m_plugin_name;
    std::string m_type_name;
    Status m_status = Status::Uninitialized;
    mutable std::mutex m_mutex;
    JApplication* m_app = nullptr;
    JLogger m_logger;

public:
    // ---------------------
    // Meant to be called by users, or alternatively from a Generator
    // ---------------------
    void SetLevel(JEventLevel level) { m_level = level; }

    void SetCallbackStyle(CallbackStyle style) { m_callback_style = style; }

    void SetPrefix(std::string prefix) {
        m_prefix = prefix;
    }
    /// For convenience, we provide a NAME_OF_THIS macro so that the user doesn't have to store the type name as a string, 
    /// because that could get out of sync if automatic refactoring tools are used.
    void SetTypeName(std::string type_name) { m_type_name = std::move(type_name); }

    JApplication* GetApplication() const { 
        if (m_app == nullptr) {
            throw JException("JApplication pointer hasn't been provided yet! Hint: Component configuration should happen inside Init(), not in the constructor.");
        }
        return m_app; 
    }

    JLogger& GetLogger() { return m_logger; }


    // ---------------------
    // Meant to be called by JANA
    // ---------------------
    std::string GetPrefix() { return m_prefix; }

    JEventLevel GetLevel() { return m_level; }

    std::string GetLoggerName() const { return m_prefix.empty() ? m_type_name : m_prefix; }

    std::string GetPluginName() const { return m_plugin_name; }

    void SetPluginName(std::string plugin_name) { m_plugin_name = std::move(plugin_name); };

    std::string GetTypeName() const { return m_type_name; }

    Status GetStatus() const { 
        std::lock_guard<std::mutex> lock(m_mutex);
        return m_status; 
    }

    void SetApplication(JApplication* app) { m_app = app; }

    void SetLogger(JLogger logger) { m_logger = logger; }


protected:
    struct ParameterBase {
        std::string m_name;
        std::string m_description;
        virtual void Configure(JParameterManager& parman, const std::string& prefix) = 0;
        virtual void Configure(std::map<std::string, std::string> fields) = 0;
    };

    struct ServiceBase {
        virtual void Init(JApplication* app) = 0;
    };

    void RegisterParameter(ParameterBase* parameter) {
        m_parameters.push_back(parameter);
    }

    void RegisterService(ServiceBase* service) {
        m_services.push_back(service);
    }

public:

    void ConfigureAllParameters(std::map<std::string, std::string> fields) {
        for (auto* parameter : this->m_parameters) {
            parameter->Configure(fields);
        }
    }

protected:
    template <typename T>
    class ParameterRef : public ParameterBase {

        T* m_data;

    public:
        ParameterRef(JComponent* owner, std::string name, T& slot, std::string description="") {
            owner->RegisterParameter(this);
            this->m_name = name;
            this->m_description = description;
            m_data = &slot;
        }

        const T& operator()() { return *m_data; }

    protected:

        void Configure(JParameterManager& parman, const std::string& prefix) override {
            parman.SetDefaultParameter(prefix + ":" + this->m_name, *m_data, this->m_description);
        }
        void Configure(std::map<std::string, std::string> fields) override {
            auto it = fields.find(this->m_name);
            if (it != fields.end()) {
                const auto& value_str = it->second;
                JParameterManager::Parse(value_str, *m_data);
            }
        }
    };

    template <typename T>
    class Parameter : public ParameterBase {

        T m_data;

    public:
        Parameter(JComponent* owner, std::string name, T default_value, std::string description) {
            owner->RegisterParameter(this);
            this->m_name = name;
            this->m_description = description;
            m_data = default_value;
        }

        const T& operator()() { return m_data; }

    protected:

        void Configure(JParameterManager& parman, const std::string& prefix) override {
            parman.SetDefaultParameter(prefix + ":" + this->m_name, m_data, this->m_description);
        }
        void Configure(std::map<std::string, std::string> fields) override {
            auto it = fields.find(this->m_name);
            if (it != fields.end()) {
                const auto& value_str = it->second;
                JParameterManager::Parse(value_str, m_data);
            }
        }
    };


    template <typename ServiceT>
    class Service : public ServiceBase {

        std::shared_ptr<ServiceT> m_data;

    public:

        Service(JComponent* owner) {
            owner->RegisterService(this);
        }

        ServiceT& operator()() {
            return *m_data;
        }

    protected:

        void Init(JApplication* app) {
            m_data = app->GetService<ServiceT>();
        }

    };




};



} // namespace omni
} // namespace jana


