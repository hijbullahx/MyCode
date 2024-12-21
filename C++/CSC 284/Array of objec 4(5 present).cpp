/*You are organizing a school event and need to keep track of the participating students.
Create a class called "Student" with attributes for student name and participation status.
Implement member functions to mark a student as present and display the student
details. Create an array of 5 Student objects and print the details of all students who
attended the event.*/
#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    char y, Y, n, N, p;
    bool present;

    void get_name()
    {
        {
            if(present)
            {
            cout<<"Enter Student Name: "<<endl;
            cin>>name;
            }
        }
    }



    void show()
    {

        cout<<name<<endl;
    }
};
int main()
{
    Student h[5];
    char participation;
    cout<<"Press Y if this student is present: "<<endl;
    cout<<"Press N if this student is not present: "<<endl;
    for (int i = 0; i< 5 ; i++)
    {
        cout<<"For SL- "<<i+1<<endl;
        cin>>participation;
        h[i].present = (participation == 'y' || participation == 'Y');
        h[i].get_name();
    }
    cout<<"Attended Students are: "<<endl;
    cout<<endl;
    for (int i = 0; i< 5 ; i++)
    {
        if (h[i].present)
        {
            h[i].show();
        }

    }

}
