using System;
namespace factorial
{
    class forLoop
    {
        static void Main()
        {
            int n;
            Console.Write("Enter the number: ");
            n = Convert.ToInt32(Console.ReadLine());
            int fact = 1;
            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            Console.WriteLine($"Factorial of {n} is {fact}");
        }
    }
}

//using System;
//namespace while_Loop
//{
//    class whileLoop
//    {
//        static void Main()
//        {
//            int n;
//            int fact = 1;
//            n = Convert.ToInt32(Console.ReadLine());
//            while (n > 0)
//            {
//                fact = fact * n;
//                n--;
//            }
//            Console.WriteLine(fact);
//        }
//    }
//}

//using System;
//namespace doWhileLoop
//{
//    class doWhileLoop
//    {
//        static void Main()
//        {
//            int n;
//            int fact = 1;
//            n = Convert.ToInt32(Console.ReadLine());
//            do
//            {
//                fact = fact * n;
//                n--;
//            }
//            while (n > 0);
//            Console.WriteLine(fact);
//        }
//    }
//}
