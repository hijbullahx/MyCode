/*Implement a Vehicle class with properties like speed and acceleration. Overload the <
operator to compare two vehicles and determine which one is faster.*/
#include<iostream>
using namespace std;
class Vehicle
{
    float speed, acceleration;
public:
    Vehicle(float a, float b)
    {
        speed = a;
        acceleration = b;
    }
    float calc()
    {
        return speed + acceleration;
    }
    bool operator <(Vehicle &another)
    {
        return calc()<another.calc();
    }
    void show()
    {
        cout<<"Vehicle's Speed: "<<speed<<", Vehicle's acceleration: "<<acceleration<<endl;
    }
};
int main()
{
    cout<<"First vehicle: ";
    Vehicle v1(3,2);
    v1.calc();
    v1.show();
    cout<<"Second vehicle: ";
    Vehicle v2(1,3);
    v2.calc();
    v2.show();
    if(v1<v2)
    {
        cout<<"Second Vehicle is the faster one!"<<endl;
    }
    else
    {
        cout<<"First Vehicle is the faster one!"<<endl;
    }
    return 0;
}
