
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.

#ifndef _JVersion_h_
#define _JVersion_h_

#include <sstream>

struct JVersion {

    static const int major = 2;
    static const int minor = 1;
    static const int patch = 2;
    static const std::string last_commit_hash;
    static const std::string last_commit_date;
    static const std::string installdir;
    static const bool is_unknown = 0;
    static const bool is_release = 0;
    static const bool is_modified = 0;

    static unsigned int GetMajorNumber() { return major; }
    static unsigned int GetMinorNumber() { return minor; }
    static unsigned int GetPatchNumber() { return patch; }

    static std::string GetCommitHash() { return last_commit_hash; }
    static std::string GetCommitDate() { return last_commit_date; }

    static std::string GetInstallDir() { return installdir; }

    static std::string GetVersion() {
        std::stringstream ss;
        ss << major << "." << minor << "." << patch;
        if (is_unknown) {
            // ss << " (git status unknown)";
            // If .git is not present, degrade gracefully. Don't lead the user to believe that there is an error
        }
        else if (is_modified) {
            ss << " (uncommitted changes)";
        }
        else if (is_release) {
            ss << " (release)";
        }
        else {
            ss << " (development)";
        }
        return ss.str();
    }
};

// These are defined here to allow cmake to set them but are
// actually used in JMain.cc.
#define JVERSION_COMMIT_HASH "e988cd31fd09955fd22a02710c0348cc62fa273c"
#define JVERSION_COMMIT_DATE "Wed, 10 Apr 2024 18:19:18 -0400"
#define CMAKE_INSTALL_PREFIX "/home/tsai/eic/JANA2"

#endif // _JVersion_h_

