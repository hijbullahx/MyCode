using System;
using System.Reflection.Metadata.Ecma335;
class Emp
{
    private string firstName;
    private string lastName;    
    public string FrstName
    {
        get { return firstName; }
        set { firstName = value; }
    }
    public string LastName
    {
        get { return lastName; }
        set { lastName = value; }
    }
    public string FullName
    {
        get { return firstName + " " + lastName; }
    }
}
public class Program
{
    static void Main()
    {
        Emp e = new Emp();
        Console.Write("Enter First Name: ");
        e.FrstName = Console.ReadLine();
        Console.Write("Enter Last Name: ");
        e.LastName = Console.ReadLine();
        Console.WriteLine("Full Name: "+ e.FullName);
    }
}