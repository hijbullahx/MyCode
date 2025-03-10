using System;
class Assignmetn3
{
    static void Main()
    {
        string studentName;
        int studentAge;
        double studentGPA;
        bool studentIsRegistered;
        Console.WriteLine("Enter your name: ");
        studentName = Console.ReadLine();
        Console.WriteLine("Enter your age: ");
        studentAge = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Enter your GPA: ");
        studentGPA = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Are you registered? (true/false): ");
        studentIsRegistered = Convert.ToBoolean(Console.ReadLine());
        Console.WriteLine("Student Name: " + studentName);
        Console.WriteLine("Student Age: " + studentAge);
        Console.WriteLine("Student GPA: " + studentGPA);
        Console.WriteLine("Student is Registered: " + studentIsRegistered);
    }

}