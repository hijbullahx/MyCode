using System;
namespace Interfae
{
    interface IVehicle
    {
        void Start();
        void Stop();
    }
    class car: IVehicle
    {
        public void Start()
        {
            Console.WriteLine($"Car starting...");
        }
        public void Stop()
        {
            Console.WriteLine("Car stopping...");
        }
    }
    class Bike: IVehicle
    {
        public void Start()
        {
            Console.WriteLine("Bike Starting...");
        }
        public void Stop()
        {
            Console.WriteLine("Bike Stopping...");
        }
    }
    class Program
    {
        static void Main()
        {
            car c = new car();
            c.Start();
            c.Stop();

            Bike b = new Bike();
            b.Start();
            b.Stop();
        }
    }
}