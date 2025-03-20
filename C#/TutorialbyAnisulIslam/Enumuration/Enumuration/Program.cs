using System;
namespace Enum
{
    enum Days
    {
        sat,
        sun,
        mon,
        wed,
        tue,
        thu,
        fri
    }
    class Test
    {
        static void Main()
        {
            Console.WriteLine("Sat: " + (int)Days.sat);
            Console.WriteLine($"Sun: {(int)Days.sun}");
        }
    }
}