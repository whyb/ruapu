using System;
using ruapu_wrapping;
using System.Runtime.InteropServices;

namespace example
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("ruapu init");
            ruapu_wrapping.Ruapu.ruapu_init();

            //Console.WriteLine("ruapu_rua: " + ruapu_wrapping.Ruapu.ruapu_rua());

            Console.WriteLine("ruapu supports:");
            Console.WriteLine("mmx = " + ruapu_wrapping.Ruapu.ruapu_supports("mmx"));
            Console.WriteLine("sse = " + ruapu_wrapping.Ruapu.ruapu_supports("sse"));
            Console.WriteLine("sse2 = " + ruapu_wrapping.Ruapu.ruapu_supports("sse2"));
            Console.WriteLine("sse3 = " + ruapu_wrapping.Ruapu.ruapu_supports("sse3"));
            Console.WriteLine("ssse3 = " + ruapu_wrapping.Ruapu.ruapu_supports("ssse3"));
            Console.WriteLine("sse41 = " + ruapu_wrapping.Ruapu.ruapu_supports("sse41"));
            Console.WriteLine("sse42 = " + ruapu_wrapping.Ruapu.ruapu_supports("sse42"));
            Console.WriteLine("sse4a = " + ruapu_wrapping.Ruapu.ruapu_supports("sse4a"));
            Console.WriteLine("xop = " + ruapu_wrapping.Ruapu.ruapu_supports("xop"));
            Console.WriteLine("avx = " + ruapu_wrapping.Ruapu.ruapu_supports("avx"));
            Console.WriteLine("f16c = " + ruapu_wrapping.Ruapu.ruapu_supports("f16c"));
            Console.WriteLine("fma = " + ruapu_wrapping.Ruapu.ruapu_supports("fma"));
            Console.WriteLine("fma4 = " + ruapu_wrapping.Ruapu.ruapu_supports("fma4"));
            Console.WriteLine("avx2 = " + ruapu_wrapping.Ruapu.ruapu_supports("avx2"));
            Console.WriteLine("avx512f = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512f"));
            Console.WriteLine("avx512bw = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512bw"));
            Console.WriteLine("avx512cd = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512cd"));
            Console.WriteLine("avx512dq = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512dq"));
            Console.WriteLine("avx512vl = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512vl"));
            Console.WriteLine("avx512vnni = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512vnni"));
            Console.WriteLine("avx512bf16 = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512bf16"));
            Console.WriteLine("avx512ifma = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512ifma"));
            Console.WriteLine("avx512vbmi = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512vbmi"));
            Console.WriteLine("avx512vbmi2 = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512vbmi2"));
            Console.WriteLine("avx512fp16 = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512fp16"));
            Console.WriteLine("avx512er = " + ruapu_wrapping.Ruapu.ruapu_supports("avx512er"));
            Console.WriteLine("avx5124fmaps = " + ruapu_wrapping.Ruapu.ruapu_supports("avx5124fmaps"));
            Console.WriteLine("avx5124vnniw = " + ruapu_wrapping.Ruapu.ruapu_supports("avx5124vnniw"));
            Console.WriteLine("avxvnni = " + ruapu_wrapping.Ruapu.ruapu_supports("avxvnni"));
            Console.WriteLine("avxvnniint8 = " + ruapu_wrapping.Ruapu.ruapu_supports("avxvnniint8"));
            Console.WriteLine("avxifma = " + ruapu_wrapping.Ruapu.ruapu_supports("avxifma"));
        }
    }
}
