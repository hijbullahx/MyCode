/*Create a class named Animal with a data member to store the name of the animal.
Create another class named Cat that inherits from the Animal class and has a data
member to store the number of lives of a cat. Write a program to create a Cat object
and print out its name and number of lives.*/
#include<iostream>
using namespace std;
class Animal
{
protected:
    string name;
public:
    void input()
    {
        cout<<"Name of the animal: ";
        cin>>name;
    }
};
class Cat : public Animal
{
    int l_cat;
public:
    void display()
    {
        cout<<"Lives of the cat: ";
        cin>>l_cat;
        cout<<"Name: "<<name<<endl;
        cout<<"Number of Lives: "<<l_cat<<endl;
    }
};
int main()
{
    Cat c;
    c.input();
    c.display();
    return 0;
}
