#ifndef RUAPU_DLLEXPORT
#define RUAPU_DLLEXPORT

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define DECL_EXPORT __declspec(dllexport)
#  define DECL_IMPORT __declspec(dllimport)
#else
#  define DECL_EXPORT __attribute__((visibility("default")))
#  define DECL_IMPORT __attribute__((visibility("default")))
#endif


extern "C" DECL_EXPORT void ruapu_init_c();

extern "C" DECL_EXPORT int ruapu_supports_c(const char* isa);

extern "C" DECL_EXPORT const char* const* ruapu_rua_c();


#endif // RUAPU_DLLEXPORT