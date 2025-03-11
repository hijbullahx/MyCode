using System;
namespace largeNumber
{
    class Program
    {
        static void Main()
        {
            int a, b;
            Console.WriteLine("Enter the first number: ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the second number: ");
            b = Convert.ToInt32(Console.ReadLine());
            if (a>b)
            {
                Console.WriteLine("The Largest number is: " + a);
            }
            else if(b>a)
            {
                Console.WriteLine($"The Largest number is: {b}");
            }
            else
            {
                Console.WriteLine("Both numbers are equal");
            }
        }
    }
}