using System;
namespace multiplactionTable
{
    class Program
    {
        static void Main()
        {
            int startNumber;
            int endNumber;
            Console.WriteLine("Enter the start number");
            startNumber = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the end number");
            endNumber = Convert.ToInt32(Console.ReadLine());
            for (int i = startNumber; i<=endNumber; i++)
            {
                for (int j = 1; j <= 10; j++)
                {
                    Console.WriteLine($"{i} X {j} = {i * j}");
                }
                Console.WriteLine("*****************");
            }
            

        }
    }
}