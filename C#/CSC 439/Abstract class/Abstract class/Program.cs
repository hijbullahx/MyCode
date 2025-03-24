using System;
namespace Abstract
{
    abstract class Shape
    {
        public abstract double CalculateArea();
        public void Display()
        {
            Console.WriteLine("Calculating area...");
        }
    }
    class Circle : Shape
    {
        private double radius;
        public Circle(double r)
        {
            radius = r;
        }

        public override double CalculateArea()
        {
            return Math.PI * radius * radius;
        }
    }
    class Rectangle : Shape
    {
        private double length, width;
        public Rectangle(double l, double w)
        {
            length = l;
            width = w;
        }
        public override double CalculateArea()
        {
            return length * width;
        }
    }
    class Program
    {
        static void Main()
        {
            Shape circle = new Circle(5);
            circle.Display();
            Console.WriteLine("Circle Area: " + circle.CalculateArea());
            Shape rectangle = new Rectangle(4, 6);
            rectangle.Display();
            Console.WriteLine("Rectangle Area: " + rectangle.CalculateArea());
        }
    }
}
