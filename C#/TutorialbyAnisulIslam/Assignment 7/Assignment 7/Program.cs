using System;
namespace evenOrOdd
{
    public class Program
    {
        static void Main()
        {
            int num;
            Console.WriteLine("Enter a number: ");
            num = Convert.ToInt32(Console.ReadLine());
            if(num%2 == 0)
            {
                Console.WriteLine($"{num} is an even number.");
            }
            else
            {
                Console.WriteLine($"{num} is an odd number.");
            }

        }
    }   
    }