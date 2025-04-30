using System;
using System.Collections.Generic;
using System.Linq;

class Employee
{
    public string Department { get; set; }
    public string Name { get; set; }
}

class Program
{
    static void Main()
    {
        // Creating a list of employees
        List<Employee> employees = new List<Employee>
        {
            new Employee { Department = "HR", Name = "Alice" },
            new Employee { Department = "IT", Name = "Bob" },
            new Employee { Department = "HR", Name = "Chowdhury" },
            new Employee { Department = "IT", Name = "Dalim" },
            new Employee { Department = "Finance", Name = "Eela" }
        };

        // Grouping employees by Department
        var grouped = employees.GroupBy(emp => emp.Department);

        // Displaying the results
        foreach (var group in grouped)
        {
            Console.WriteLine("Department: " + group.Key);
            foreach (var emp in group)
            {
                Console.WriteLine(" - " + emp.Name);
            }
        }
    }
}
