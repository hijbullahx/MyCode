using System;
class Book
{
    public string title;
    public string author;
    public double price;

    public Book(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }
    public Book(Book copys)
    {
        title = copys.title;
        author = copys.author;
        price = copys.price;
    }
    public void Display()
    {
        Console.WriteLine(title);
        Console.WriteLine(author);
        Console.WriteLine(price);
    }
}
public class Program

{
    static void Main()
    {
        Book b1 = new Book("Hi", "a", 23);
        b1.Display();
        Book b2 = new Book(b1);
        Console.WriteLine("0000");
        b2.title = "b";
        b2.Display(); 
    }
}
