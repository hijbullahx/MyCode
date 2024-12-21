/*You are designing a racing game and want to keep track of the lap times of different
cars. Create a class called "Car" with attributes for car brand and lap time. Implement
member functions to update the lap time and display the car details. Create an array of
6 Car objects and print the details of all cars along with their fastest lap times.*/
#include<iostream>
using namespace std;
class Car
{
public:
    string car_name;
    float lp_time;
    float f_lp;
    void input()
    {
    cout<<"Enter The Car Name Please: ";
    cin>>car_name;
    cout<<"Enter It's Original Lap Time Please: ";
    cin>>lp_time;
    f_lp = lp_time;
    }
    void display()
    {
        cout<<"Car Name: "<<car_name<<endl;
        cout<<"Lap Time: "<<lp_time<<endl;
    }
    void update()
    {
        cout<<"Enter the updated lap Time: ";
        cin>>lp_time;
    }
    void fastest()
    {
        if(lp_time < f_lp)
        {
            f_lp = lp_time;
        }
    }


};
int main()
{
    Car c[6];
    for(int i = 0; i<6; i++)
    {
        cout<<"Car No."<<i+1<<": "<<endl;
        c[i].input();
    }
    cout<<endl;
    cout<<"Car Details: "<<endl;
    for(int i = 0; i<6; i++)
    {
        cout<<"Car No."<<i+1<<": "<<endl;
        c[i].display();
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i<6; i++)
    {
        cout<<"For Car No."<<i+1<<": "<<endl;
        c[i].update();
        cout<<endl;
    }
    cout<<endl;
    cout<<"Updated Details: "<<endl;
    for(int i = 0; i<6; i++)
    {
        c[i].fastest();
        cout<<"Car No."<<i+1<<": "<<endl;
        c[i].display();
        cout<<"Fastest Lap Time: "<<c[i].f_lp<<endl;
        cout<<endl;
    }

}

