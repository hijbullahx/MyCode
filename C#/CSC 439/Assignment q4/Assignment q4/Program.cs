using System;

// Abstract class
abstract class Appliance
{
    public abstract void TurnOn(); // Abstract method

    public void TurnOff() // Non-abstract method
    {
        Console.WriteLine("Turning off the appliance");
    }
}

// Interface
interface IControllable
{
    void Control();
}

// Derived class
class WashingMachine : Appliance, IControllable
{
    public override void TurnOn()
    {
        Console.WriteLine("Washing machine turning on...");
    }

    public void Control()
    {
        Console.WriteLine("Controlling washing machine...");
    }
}

class Program
{
    static void Main()
    {
        WashingMachine w = new WashingMachine();
        w.TurnOn();     // From Appliance (abstract)
        w.Control();    // From IControllable (interface)
        w.TurnOff();    // From Appliance (non-abstract)
    }
}
