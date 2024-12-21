/*Create a class named Person with data members to store the name and age of a
person. Create another class named Student with data members to store the student ID
and GPA. Create a third class named StudentAthlete that inherits from both the
Student and Person classes and has a data member to store the sport played by the
student athlete. Write a program to create a StudentAthlete object and print out their
name, age, student ID, GPA, and sport*/
#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
};
class Student
{
protected:
    string s_id;
    float gpa;
};
class StudentAthlete : public Person, public Student
{
    string s_played;
public:
    void get_data()
    {
        cout<<"Person Name: "<<endl;
        cin>>name;
        cout<<"Person Age: "<<endl;
        cin>>age;
        cout<<"Student ID: "<<endl;
        cin>>s_id;
        cout<<"Student GPA: "<<endl;
        cin>>gpa;
        cout<<"Sport Played: "<<endl;
        cin>>s_played;
    }
    void output()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<s_id<<endl;
        cout<<"GPA: "<<gpa<<endl;
        cout<<"Played: "<<s_played<<endl;
    }
};
int main()
{
    StudentAthlete s;
    s.get_data();
    s.output();
    return 0;
}
