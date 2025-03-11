using System;
namespace gradeCalculator
{
    public class assignment9
    {
        static void Main()
        {
            int mark;
            string grade;
            Console.WriteLine("Enter student's mark: ");
            mark = Convert.ToInt32(Console.ReadLine());
            if (mark >= 0 && mark <= 100)
            {
                if (mark >= 90 && mark <= 100)
                {
                    grade = "A";
                }
                else if (mark >= 80 && mark <= 89)
                {
                    grade = "B";
                }
                else if (mark >= 70 && mark <= 79)
                {
                    grade = "C";
                }
                else if (mark >= 60 && mark <= 69)
                {
                    grade =0 "D";
                }
                else
                {
                    grade = "F";
                }
                Console.WriteLine($"The student's grade is {grade}");
            }
            else
            {
                Console.WriteLine("Invalid mark");
            }
        }
    }
}