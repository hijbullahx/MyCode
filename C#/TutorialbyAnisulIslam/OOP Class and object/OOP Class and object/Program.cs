using System;
namespace classAndObject
{
    class Person
    {
        public string name;
        public int age;
    }
    class Test
    {
        static void Main()
        {
            Person p1 = new Person();
            Person p2 = new Person();
            p1.name = "Hijbullah";
            p1.age = 24;
            p2.name = "Masud";
            p2.age = 25;
            Console.WriteLine("Person 1");
            Console.WriteLine($"Name: {p1.name} Age: {p1.age}\n");
            Console.WriteLine("Person 2");
            Console.WriteLine($"Name: {p2.name} Age: {p2.age}");
        }
    }
}

  