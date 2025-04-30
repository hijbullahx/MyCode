using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    // Method to reverse a list
    static void ReverseList(List<int> list)
    {
        list.Reverse();
        Console.WriteLine("Reversed List:");
        foreach (int num in list)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }

    static void Main()
    {
        // First list
        List<int> list1 = new List<int> { 1, 2, 3, 4 };
        // Second list
        List<int> list2 = new List<int> { 3, 4, 5, 6 };

        // Merging and removing duplicates
        List<int> mergedList = list1.Concat(list2).Distinct().ToList();

        Console.WriteLine("Merged List without duplicates:");
        foreach (int num in mergedList)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();

        // Call method to reverse and display
        ReverseList(mergedList);
    }
}
