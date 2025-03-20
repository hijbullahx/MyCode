using System;
namespace classAndObject
{
    class Person
    {
        public string name;
        public int age;
        
        public void setValue(string n, int a)//method
        {
            name = n;
            age = a;
        }
        public void DisplayInfo()//method
        {
            Console.WriteLine($"Name: {name}, Age: {age}\n");
        }
    }
    class Test
    {
        static void Main()
        {
            Person p1 = new Person();
            Person p2 = new Person();
            p1.setValue("Hijbullah", 22);
            p2.setValue("Masud", 23);
            p1.DisplayInfo();
            p2.DisplayInfo();
        }
    }
}

  