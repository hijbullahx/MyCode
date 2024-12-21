/*Define a class Person with private members for name and age.
Write a friend function isOlder that takes two Person objects as
parameters and returns true if the first person is older than
the second person, and false otherwise.*/
#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    Person(string n, int a)
    {
       name = n;
       age = a;
    }
    friend bool is_older(Person p1, Person p2);
};
bool is_older(Person p1, Person p2)
{
    return p1.age>p2.age;
}
int main()
{
    string name1,name2;
    int age1, age2;
    cout<<"The First Person Name: ";
    cin>>name1;
    cout<<"Second Person Name: ";
    cin>>name2;
    cout<<"The First Person Age: ";
    cin>>age1;
    cout<<"Second Person Age: ";
    cin>>age2;

    Person p1(name1, age1);
    Person p2(name2, age2);
    if(is_older(p1,p2))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}
