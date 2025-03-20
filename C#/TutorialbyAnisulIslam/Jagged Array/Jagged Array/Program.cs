using System;
namespace JaggedArray
{
    class Program
    {
        public static void Main()
        {
            int[][] jaggedArray =
            {
                new int [] {1,2,3,4},
                new int [] {5,6,7,8,9},
                new int [] {10,12}
            };
            foreach (var row in jaggedArray)
            {
                foreach (var item in row)
                {
                    Console.Write(item + " ");
                }
                Console.WriteLine();
            }
        }
    }
}