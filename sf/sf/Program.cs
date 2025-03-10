using System;

class HelloWorld
{
    static void Main(string[] args)
    {
        string input = Console.ReadLine() ?? string.Empty;
        int number = 0;
        if (input != null)
        {
            number = int.Parse(input);
            Console.WriteLine(number);
        }
        else
        {
            Console.WriteLine("Input was null.");
        }
        Console.WriteLine(number);
    }
}