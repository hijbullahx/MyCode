using System;
class Rectangle
{
    private double length;
    private double width;
    public double Length
    {
        get { return length; }
        set
        {
            if(value<0)
            {
                length = 0;
            }
            else
            {
                length = value;
            }
        }
    }
    public double Width
    {
        get { return width; }
        set
        {
            if (value < 0)
            {
                width = 0;
            }
            else
            {
                width = value;
            }
        }
    }
    public double Area()
    {
        return length*width;
    }
}
class Program
{
    static void Main()
    {
        Rectangle rectangle = new Rectangle();
        rectangle.Length = 10;
        rectangle.Width = 20;
        Console.WriteLine(rectangle.Area());
    }
}