#include "dllexport.h"
#define RUAPU_IMPLEMENTATION 1
#include "../../ruapu.h"


void ruapu_init_c()
{
    ruapu_init();
}

int ruapu_supports_c(const char* isa)
{
    return ruapu_supports(isa);
}

const char* const* ruapu_rua_c()
{
    return ruapu_rua();
}