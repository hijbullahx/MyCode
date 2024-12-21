#include<iostream>
using namespace std;
class Car
{
public:
    string make="Toyota", model="Camry";
    int year=2021;
    float mileage=10000;
    bool luxurious = true;
    information()
    {
        cout<<"Make ="<<make<<endl;
        cout<<"Model ="<<model<<endl;
        cout<<"Year ="<<year<<endl;
        cout<<"Mileage ="<<mileage<<endl;
    }
    update(float m)
    {
        mileage = m;
    }
     void luxury()
    {
        if (luxurious == 1)
        {
            cout<<"The car is luxurious";
        }
    }
};
int main()
{
    float m;
    Car obj;
    obj.information();
    cout<<"Enter The Changed Milage"<<endl;
    cin>>m;
    obj.update(m);
    obj.information();
    cout<<endl;
    obj.luxury();
}
