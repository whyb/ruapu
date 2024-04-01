#include <iostream>

#define RUAPU_IMPLEMENTATION
#include "ruapu.hpp"

#define PRINT_ISA_SUPPORT_CPP(isa) std::cout << #isa << " = " << (ruapu::support(#isa) ? "True" : "False") << std::endl;

int main()
{
    using namespace nihui;

    std::unique_ptr<std::list<std::string_view>> supported = nihui::ruapu::rua();
    printf("isa features list: ");
    for(auto& item : *supported)
    {
        printf("%s ", item.data());
    }
    printf("\n");
    fflush(stdout);

#if defined(__i386__) || defined(__x86_64__) || defined(_M_IX86) || defined(_M_X64)
    PRINT_ISA_SUPPORT_CPP(mmx)
    PRINT_ISA_SUPPORT_CPP(sse)
    PRINT_ISA_SUPPORT_CPP(sse2)
    PRINT_ISA_SUPPORT_CPP(sse3)
    PRINT_ISA_SUPPORT_CPP(ssse3)
    PRINT_ISA_SUPPORT_CPP(sse41)
    PRINT_ISA_SUPPORT_CPP(sse42)
    PRINT_ISA_SUPPORT_CPP(sse4a)
    PRINT_ISA_SUPPORT_CPP(xop)
    PRINT_ISA_SUPPORT_CPP(avx)
    PRINT_ISA_SUPPORT_CPP(f16c)
    PRINT_ISA_SUPPORT_CPP(fma)
    PRINT_ISA_SUPPORT_CPP(fma4)
    PRINT_ISA_SUPPORT_CPP(avx2)
    PRINT_ISA_SUPPORT_CPP(avx512f)
    PRINT_ISA_SUPPORT_CPP(avx512bw)
    PRINT_ISA_SUPPORT_CPP(avx512cd)
    PRINT_ISA_SUPPORT_CPP(avx512dq)
    PRINT_ISA_SUPPORT_CPP(avx512vl)
    PRINT_ISA_SUPPORT_CPP(avx512vnni)
    PRINT_ISA_SUPPORT_CPP(avx512bf16)
    PRINT_ISA_SUPPORT_CPP(avx512ifma)
    PRINT_ISA_SUPPORT_CPP(avx512vbmi)
    PRINT_ISA_SUPPORT_CPP(avx512vbmi2)
    PRINT_ISA_SUPPORT_CPP(avx512fp16)
    PRINT_ISA_SUPPORT_CPP(avx512er)
    PRINT_ISA_SUPPORT_CPP(avx5124fmaps)
    PRINT_ISA_SUPPORT_CPP(avx5124vnniw)
    PRINT_ISA_SUPPORT_CPP(avxvnni)
    PRINT_ISA_SUPPORT_CPP(avxvnniint8)
    PRINT_ISA_SUPPORT_CPP(avxvnniint16)
    PRINT_ISA_SUPPORT_CPP(avxifma)
    PRINT_ISA_SUPPORT_CPP(amxfp16)
    PRINT_ISA_SUPPORT_CPP(amxbf16)
    PRINT_ISA_SUPPORT_CPP(amxint8)
    PRINT_ISA_SUPPORT_CPP(amxtile)


#elif __aarch64__ || defined(_M_ARM64)
    PRINT_ISA_SUPPORT(neon)
    PRINT_ISA_SUPPORT(vfpv4)
    PRINT_ISA_SUPPORT(lse)
    PRINT_ISA_SUPPORT(cpuid)
    PRINT_ISA_SUPPORT(asimdrdm)
    PRINT_ISA_SUPPORT(asimdhp)
    PRINT_ISA_SUPPORT(asimddp)
    PRINT_ISA_SUPPORT(asimdfhm)
    PRINT_ISA_SUPPORT(bf16)
    PRINT_ISA_SUPPORT(i8mm)
    PRINT_ISA_SUPPORT(frint)
    PRINT_ISA_SUPPORT(jscvt)
    PRINT_ISA_SUPPORT(fcma)
    PRINT_ISA_SUPPORT(mte)
    PRINT_ISA_SUPPORT(mte2)
    PRINT_ISA_SUPPORT(sve)
    PRINT_ISA_SUPPORT(sve2)
    PRINT_ISA_SUPPORT(svebf16)
    PRINT_ISA_SUPPORT(svei8mm)
    PRINT_ISA_SUPPORT(svef32mm)
    PRINT_ISA_SUPPORT(svef64mm)
    PRINT_ISA_SUPPORT(sme)
    PRINT_ISA_SUPPORT(smef16f16)
    PRINT_ISA_SUPPORT(smef64f64)
    PRINT_ISA_SUPPORT(smei64i64)
    PRINT_ISA_SUPPORT(pmull)
    PRINT_ISA_SUPPORT(crc32)
    PRINT_ISA_SUPPORT(aes)
    PRINT_ISA_SUPPORT(sha1)
    PRINT_ISA_SUPPORT(sha2)
    PRINT_ISA_SUPPORT(sha3)
    PRINT_ISA_SUPPORT(sha512)
    PRINT_ISA_SUPPORT(sm3)
    PRINT_ISA_SUPPORT(sm4)
    PRINT_ISA_SUPPORT(svepmull)
    PRINT_ISA_SUPPORT(svebitperm)
    PRINT_ISA_SUPPORT(sveaes)
    PRINT_ISA_SUPPORT(svesha3)
    PRINT_ISA_SUPPORT(svesm4)
    PRINT_ISA_SUPPORT(amx)

#elif __arm__ || defined(_M_ARM)
    PRINT_ISA_SUPPORT(half)
    PRINT_ISA_SUPPORT(edsp)
    PRINT_ISA_SUPPORT(neon)
    PRINT_ISA_SUPPORT(vfpv4)
    PRINT_ISA_SUPPORT(idiv)

#elif __mips__
    PRINT_ISA_SUPPORT(msa)

#elif __powerpc__
    PRINT_ISA_SUPPORT(vsx)

#elif __s390x__
    PRINT_ISA_SUPPORT(zvector)

#elif __loongarch__
    PRINT_ISA_SUPPORT(lsx)
    PRINT_ISA_SUPPORT(lasx)

#elif __riscv
    PRINT_ISA_SUPPORT(i)
    PRINT_ISA_SUPPORT(m)
    PRINT_ISA_SUPPORT(a)
    PRINT_ISA_SUPPORT(f)
    PRINT_ISA_SUPPORT(d)
    PRINT_ISA_SUPPORT(c)
    PRINT_ISA_SUPPORT(zfa)
    PRINT_ISA_SUPPORT(zfh)
    PRINT_ISA_SUPPORT(zfhmin)
    PRINT_ISA_SUPPORT(zicsr)
    PRINT_ISA_SUPPORT(zifencei)

    PRINT_ISA_SUPPORT(xtheadba)
    PRINT_ISA_SUPPORT(xtheadbb)
    PRINT_ISA_SUPPORT(xtheadbs)
    PRINT_ISA_SUPPORT(xtheadcondmov)
    PRINT_ISA_SUPPORT(xtheadfmemidx)
    PRINT_ISA_SUPPORT(xtheadfmv)
    PRINT_ISA_SUPPORT(xtheadmac)
    PRINT_ISA_SUPPORT(xtheadmemidx)
    PRINT_ISA_SUPPORT(xtheadmempair)
    PRINT_ISA_SUPPORT(xtheadsync)
    PRINT_ISA_SUPPORT(xtheadvdot)

#elif __openrisc__
    PRINT_ISA_SUPPORT(orbis32)
    PRINT_ISA_SUPPORT(orbis64)
    PRINT_ISA_SUPPORT(orfpx32)
    PRINT_ISA_SUPPORT(orfpx64)
    PRINT_ISA_SUPPORT(orvdx64)

#endif

    fflush(stdout);

    return 0;
}
