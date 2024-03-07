#pragma once

#include <memory>
#include <list>
#include <mutex>
#include <string>
#include <string_view>

#define RUAPU_IMPLEMENTATION
#include "../ruapu.h"

namespace nihui {

// Implementing a Thread-Safe Singleton with C++11 Using Magic Static Singleton
class ruapu {
public:
    ruapu() = default;
    ~ruapu() = default;
    ruapu(const ruapu &) = delete;
    ruapu &operator=(const ruapu &) = delete;
    ruapu(ruapu &&) = delete;
    ruapu &operator=(ruapu &&) = delete;

    static bool support(const std::string& isa) noexcept {
        init();
        return ruapu_supports(isa.c_str()) == 1;
    }

    static std::unique_ptr<std::list<std::string_view>> rua() noexcept {
        init();
        auto ptr = std::make_unique<std::list<std::string_view>>();
        const char* const* supported = ruapu_rua();
        while (*supported) {
            // Will be inserted frequently here, So use list
            ptr->emplace_back(*supported); // Zerocopy string from ruapu_rua()
            supported++;
        }
        return ptr;
    }

private:
    static void init() noexcept {
        static bool initialised = false;
        static std::mutex mutex;
        const std::lock_guard<std::mutex> lock(mutex);
        if (!initialised) {
            ruapu_init();
            initialised = true;
        }
    }

};
}
