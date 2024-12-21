/*We want to calculate the total marks of each student in a class in Physics, Chemistry,
and Mathematics and the average marks of the class. The user enters the number of
students in the class. Create a class named Marks with data members for roll number,
name, and marks. Create three other classes inheriting the Marks class, namely
Physics, Chemistry, and Mathematics, which are used to define marks in the
individual subject of each student. The roll number of each student will be generated
automatically.*/
/*Hiererchical Inheritence*/
#include<iostream>
using namespace std;
class Marks
{
public:
    int roll=0;
    string name;
    float marks;
    void get_info()
    {
        cout<<"Name of the student is: ";
        cin>>name;
    }
    void get_mark()
    {
        cin>>marks;
    }
};
class Physics : public Marks
{
public:
    void show_mark()
    {
        cout<<"Number of Physics: "<<marks<<endl;
    }
};
class Chemistry : public Marks
{
public:
    void show_mark()
    {
        cout<<"Number of Chemistry: "<<marks<<endl;
    }
};
class Mathematics : public Marks
{
public:
    void show_mark()
    {
        cout<<"Number of Mathematics: "<<marks<<endl;
    }
    friend void total(Physics p, Chemistry c, Mathematics m);
};
void total(Physics p, Chemistry c, Mathematics m)
{
    int cal;
    cal = p.marks+ c.marks + m.marks;
    cout<<"Total Mark: "<<cal<<endl;
    cout<<"Average Marks: "<<cal/3<<endl;
}
int main()
{
    int n;
    cout<<"How many students are there? ";
    cin>>n;
    Marks M[n];
    Physics p[n];
    Chemistry c[n];
    Mathematics m[n];
    for(int i =0; i<n; i++)
    {
        M[i].roll =i +1;
        cout<<"Roll: "<<M[i].roll<<endl;
        M[i].get_info();
        cout<<"Enter Marks for Physics: ";
        p[i].get_mark();
        cout<<"Enter Marks for Chemistry: ";
        c[i].get_mark();
        cout<<"Enter Marks for Mathematics: ";
        m[i].get_mark();
    }
    for(int i=0; i<n; i++)
    {
        M[i].roll =i+1;
        cout<<"Roll: "<<M[i].roll<<endl;
        cout<<M[i].name<<endl;
        p[i].show_mark();
        c[i].show_mark();
        m[i].show_mark();
        total(p[i], c[i], m[i]);
    }
    return 0;
}
