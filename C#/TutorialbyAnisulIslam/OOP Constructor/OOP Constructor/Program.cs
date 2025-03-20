using System;
namespace Constructor
{
    class Person
    {
        public string name;
        public int age;
        public Person()//default constructor
        {
            name = "Rahim";
            age = 17;
        }
        public Person(string n, int a)//parameterized constructor
        {
            name = n;
            age = a;
        }
        ~Person()
        {
            Console.WriteLine("Destructor is called");
        }
        public void Dispaly()
        {
            Console.WriteLine($"Name: {name}, Age: {age}\n");8
        }
        
    }
    class Program
    {
        static void Main()
        {
            Person p1 = new Person();
            p1.Dispaly();
            Person p2 = new Person("Hijbullah", 22);
            p2.Dispaly();
            Person p3= new Person("Masud", 23);
            p3.Dispaly();

        }
    }
}