using System;
namespace OOP_properties
{
    class Person
    {
        private string name;
        private int age;
        public string Name
        {
            get { return name; } //readable
            set
            {   //Writable
                if (value.Length > 2)
                {
                    name = value;
                }
                else
                {
                    Console.WriteLine("Name must be greater than 2 characters");
                }
            }

        }
        public int Age
        {
            get { return age; }
            set
            {
                if (value > 0)
                {
                    age = value;
                }
                else
                {
                    Console.WriteLine("Age must be positive");
                }
            }
        }
    }
    class Program
    {
        static void Main()
        {
            Person p = new Person();
            p.Name = "Hijbullah";
            p.Age = 20;
            Console.WriteLine($"Name: {p.Name}, Age: {p.Age}");
        }
    }
}
 