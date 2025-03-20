using System;
enum DaysofWeek
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
}
class Promt
{
    public int day;
    public void getm()
    {
        Console.Write("Enter a number to display the day: ");
       this.day = int.Parse(Console.ReadLine());
    }
    public void Display()
    {
        if(day > 0 && day <= 7)
        {
            DaysofWeek days = (DaysofWeek)day;
            Console.WriteLine("Day is: " + days);
        }
    }
}
class Program
{
    static void Main()
    {
        Promt p = new Promt();
        p.getm();
        p.Display();
    }
}
