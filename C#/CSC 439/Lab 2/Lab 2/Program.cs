using System;
abstract class Applience
{
    public abstract void TurnOn();
    public void TurnOff()
    {
        Console.WriteLine("Turning off Appliences");
    }
}
interface Icontrolable
{
    void constrol();
}
class WachingMechine: Applience, Icontrolable
{
    public override void TurnOn()
    {
        Console.WriteLine("Mechine is turning on");
    }
    public void constrol()
    {
        Console.WriteLine("Waching machine is going on");
    }
}
class Program
{
    public static void Main()
    {
        WachingMechine w = new WachingMechine();
        w.TurnOn();
        w.TurnOff();
        w.constrol();
    }

}