/*Create a class named Vehicle with data members to store the number of wheels and
the top speed of a vehicle. Create another class named Car that inherits from the
Vehicle class and has a data member to store the number of doors. Write a program to
create a Car object and print out its number of wheels, top speed, and number of
doors.*/
#include<iostream>
using namespace std;
class Vehicle
{
protected:
    int n_wheels;
    float top_speed;
};
class Car : public Vehicle
{
public:
    int n_doors;
    void input()
    {
        cout<<"How many wheels? ";
        cin>>n_wheels;
        cout<<"Enter the top speed: ";
        cin>>top_speed;
        cout<<"How many Doors? ";
        cin>>n_doors;
    }
    void display()
    {
        cout<<"Number of Wheels: "<<n_wheels<<endl;
        cout<<"Top Speed: "<<top_speed<<endl;
        cout<<"Number of Doors: "<<n_doors<<endl;
    }
};
int main()
{
    Car c;
    c.input();
    c.display();
}

