using System;
namespace OOP_Setter_and_Getter
{
    class Person
    {
        public string name;
        private int age;
        public int GetAge()
        {
            return age;
        }
        public void SetAge(int a)
        {
            age = a;
        }

    }
    class Program
    {
        static void Main()
        {
            Person p = new Person();
            p.name = "Hijbullah";
            p.SetAge(21);
           
            Console.WriteLine($"Name: {p.name}, Age: {p.GetAge()}");
        }
    }
}