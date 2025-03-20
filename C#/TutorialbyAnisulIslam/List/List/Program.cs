using System;
namespace list
{
    class test
    {
        static void Main()
        {
            var names = new List<string>();
            names.Add("a");
            names.Add("b");
            names.Add("c");
            foreach (var name in names)
            {
                Console.WriteLine(name);
            }
        }
    }
}