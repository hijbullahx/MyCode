using System;
//Concrete class
class ConcreteAnimal
{
    public void Speak()
    {
        Console.WriteLine("Animal Sound");
    }
}
//abstract class
abstract class Abanimal
{
    public abstract void Speak();
}
//implementing abstract
class Dog: Abanimal
{
    public override void Speak()
    {
        Console.WriteLine("Wolf!");
    }
}
interface Ianimal
{
    void Speak();
}
class InerAn: Ianimal
{
    public void Speak()
    {
        Console.WriteLine("Hi");
    }
}
class Program
{
    static void Main()
    {
        //concrete
        ConcreteAnimal con = new ConcreteAnimal();
        con.Speak();
        //abstract
        Abanimal con2 = new Dog();
        con2.Speak();
        //
        Ianimal con3 = new InerAn();
        con3.Speak();
    }
}