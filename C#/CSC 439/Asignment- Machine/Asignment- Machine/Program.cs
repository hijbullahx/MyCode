using System;

// Base class
class Machine
{
    public virtual void Start()
    {
        Console.WriteLine("Machine started.");
    }
}

// Interface
interface IEngine
{
    void RunEngine();
}

// Derived class with hybrid inheritance
class Car : Machine, IEngine
{
    public override void Start()
    {
        Console.WriteLine("Car started.");
    }

    public void RunEngine()
    {
        Console.WriteLine("Engine is running.");
    }
}

class Program
{
    static void Main()
    {
        Car myCar = new Car();
        myCar.Start();        // Inherited and overridden from Machine
        myCar.RunEngine();    // Implemented from IEngine
    }
}
