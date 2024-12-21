/*Create a class named Vehicle with data members to store the number of wheels and
the top speed of a vehicle. Create another class named Engine with a data member to
store the horsepower of the engine. Create a third class named Car that inherits from
both the Vehicle and Engine classes and has a data member to store the number of
doors. Write a program to create a Car object and print out its number of wheels, top
speed, horsepower, and number of doors.*/
/*Multiple Inheritence*/
#include<iostream>
using namespace std;
class Vehicle
{
protected:
    int n_wheels;
    float t_speed;
};
class Engine
{
protected:
    float hrspr;
};
class Car : public Vehicle, public Engine
{
    int n_doors;
public:
    void input()
    {
        cout<<"Number of Wheels of the car: ";
        cin>>n_wheels;
        cout<<"Top speed of the car: ";
        cin>>t_speed;
        cout<<"It's Horsepower: ";
        cin>>hrspr;
        cout<<"Number of doors: ";
        cin>>n_doors;
    }
    void output()
    {
        cout<<"Number of Wheels: "<<n_wheels<<endl;
        cout<<"Top speed of the car: "<<t_speed<<endl;
        cout<<"It's Horsepower: "<<hrspr<<endl;
        cout<<"Number of doors: "<<n_doors<<endl;
    }
} ;
int main()
{
    Car c;
    c.input();
    c.output();
    return 0;
}
