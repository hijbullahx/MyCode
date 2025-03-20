using System;

namespace Arrays
{
    public class Program
    {
        static void Main()
        {
            int size;
            size = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write($"Array elements are: ");
            for (int i = 0; i < size; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine($"\nLength of the array: {arr.Length}");
            Console.WriteLine($"Rank of the array: {arr.Rank}");
            Console.WriteLine($"Sum of the array: {arr.Sum()}");
            Console.WriteLine($"Average of the array: {arr.Average()}");
            Array.Sort(arr);
            for (int i = 0; i < size; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine(arr[2]);//access
            arr[0] = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(arr[0]);

        }
    }
}
