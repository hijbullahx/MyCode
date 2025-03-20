using System;
namespace singelInheritance
{
    class a
    {
        protected int x=10;
        protected int y=20;
        public void Add()
        {
            int sum = x + y;
            Console.WriteLine(sum);
        }
    }
    class b:a
    {
        public void Sub()
        {
            int c;
            c = x - y;
            Console.WriteLine(c);
        }
    }
        class Program
    {
        static void Main()
        {
            b n = new b();
            n.Add();
            n.Sub();
        }
    }
    

}