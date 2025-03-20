using System;
using System.ComponentModel.DataAnnotations;
namespace Array
{
    class Test
    {
        static void Main()
        {
                //Array input
                Console.Write("Enter the size of the array: ");
                int Size = Convert.ToInt32(Console.ReadLine());
                int[] arr = new int[Size];
                for (int item= 0; item<Size; item ++)
                {
                Console.WriteLine($"Enter the element {item + 1}: ");
                arr[item] = Convert.ToInt32(Console.ReadLine());
                }
                //Printing the array
                Console.WriteLine("The array is: ");
            foreach (var i in arr)
            {
                Console.Write(i + " ");
            }
            //Finding the maximum element 2 4 5 1
            int max = arr[0];
            for (int i = 1; i<Size; i++)
            {
                if (arr[i]>max)
                {
                    max = arr[i];
                }
            }
            Console.WriteLine($"\nThe maximum element is: {max}");

            //Finding the minimum element
            int min = arr[0];
            for(int j = 1; j<Size; j++)
            {
                if (arr[j]<min)
                {
                    min = arr[j];
                }
            }
            Console.WriteLine($"The minimum element is: {min}");

            //Finding the sum of the elements
            int sum = 0;
            for (int k = 0; k < Size; k++)
            {
                sum = sum + arr[k];
            }
            Console.WriteLine($"The sum of the elements is: {sum}");
            //Finding the average of the elements
            double avg = sum / Size;
            Console.WriteLine($"The average of the elements is: {avg}");
        }
    }
}