using System;
namespace areaOfCircle
{
    class Program
    {
        static void Main(string[] args)
        {
            double radius, area, pie = 3.1416;
            Console.WriteLine("Area of a Circle");
            Console.WriteLine("Enter the radius of the circle: ");
            radius = Convert.ToDouble(Console.ReadLine());
            area = pie * radius * radius;
            Console.WriteLine($"The area of the circle is: {(area).ToString("F2")}");

        }
    }
}