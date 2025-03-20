using System;
//namespace ArrayForAndforeachLoop
//{
//    class Test
//    {
//        static void Main()
//        {
//            string[] names = { "James", "John", "Robert", "Michael" };
//            int[] numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//            int sum = 0;
//            Console.WriteLine("Using for loop");
//            for (int i=0; i< names.Length; i++)

//                {
//                Console.WriteLine(names[i]);
//                }
//            Console.WriteLine("\nUsing foreach loop");
//            foreach(int num in numbers)
//            {
//                sum = sum + num;
                
//            }
//            Console.WriteLine("Sum of numbers: " + sum);
//        }
//    }
//}


//Matrix
 namespace Matrix
{
    class test
    {
        static void Main()
        {
            int[,] mat = { { 1, 2, 3 }, { 4, 5, 6 } };
            for(int row=0; row< 2; row++)
            {
                for (int column=0; column<3; column++)
                {
                    Console.Write(mat[row, column] + " ");
                }
                Console.WriteLine();
            }
        }

    }
}
