//Sum and Average of 3 Numbers
using System;
class Assignment4
{
    static void Main()
    {
        int num1, num2, num3, sum;
        double avg;
        Console.WriteLine("Enter 3 Numbers: ");
        num1 = Convert.ToInt32(Console.ReadLine());
        num2 = Convert.ToInt32(Console.ReadLine());
        num3 = Convert.ToInt32(Console.ReadLine());
        sum = num1 + num2 + num3;
        avg = (double)sum / 3;
        Console.WriteLine("Sum of 3 Numbers: " + sum);
        Console.WriteLine($"Average of 3 Numbers: {(avg).ToString("F2")}");
    }
}