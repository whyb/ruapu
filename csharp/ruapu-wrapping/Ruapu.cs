using System;
using System.Runtime.InteropServices;


namespace ruapu_wrapping
{
    public class Ruapu
    {
        [DllImport("ruapu-c.dll", EntryPoint = "ruapu_init_c")]
        private static extern void ruapu_init_c();

        [DllImport("ruapu-c.dll", EntryPoint = "ruapu_supports_c")]
        private static extern int ruapu_supports_c(IntPtr isa);

        [DllImport("ruapu-c.dll", EntryPoint = "ruapu_rua_c")]
        private static extern IntPtr ruapu_rua_c();

        public static void ruapu_init()
        {
            ruapu_init_c();
        }
        public static int ruapu_supports(string isa)
        {
            byte[] byteArray = System.Text.Encoding.ASCII.GetBytes(isa);
            IntPtr ptr = Marshal.AllocHGlobal(byteArray.Length);
            Marshal.Copy(byteArray, 0, ptr, byteArray.Length);
            return ruapu_supports_c(ptr);
        }
        public static string ruapu_rua()
        {
            IntPtr ptr = ruapu_rua_c();
            return Marshal.PtrToStringAnsi(ptr);
        }
    }
}
