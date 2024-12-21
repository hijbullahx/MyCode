#include<iostream>
using namespace std;
class Car
{
    string make, model;
    int year;
    float mileage;
public:
    Car()
    {
        cout<<"Maked By? ";
        cin>>make;
        cout<<"Model Name: ";
        cin>>model;
        cout<<"Mileage: ";
        cin>>mileage;

    }
    void display()
    {
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
    void update()
    {
        cout<<"Enter Updated Mileage: ";
        cin>>mileage;
    }
    bool Luxery = true;
    //Luxery = true;
};
int main()
{
    Car c;
    c.display();
    c.update();
    cout<<"After Update: "<<endl;
    c.display();
    cout<<"Press 1 if the Car is Luxery: ";
    cin>>c.Luxery;
    if(c.Luxery == 1)
    {
        cout<<"The Car is Luxery"<<endl;
    }
    else
    {
        cout<<"The Car is not Luxery: ";
    }

}
