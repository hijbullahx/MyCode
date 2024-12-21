/*Create an Elevator class that represents an elevator's current floor number. Overload the
unary operator ++ to represent the elevator moving up one floor, and -- to represent it
moving down one floor. Limit the elevator's movement between floors 1 and 10.*/
#include<iostream>
using namespace std;
class Elevator
{
    int  floor;
public:
    Elevator()
    {
        cout<<"Enter the current floor: ";
        cin>>floor;
    }
    void operator ++()
    {
        if(floor>=1 && floor <= 10)
        {
            floor++;
            if(floor>=1 && floor <= 10)
            {
                cout<<"The elevator moves at floor number: "<<floor<<endl;
            }
        }
    }
    void operator --()
    {
        if(floor>=1 && floor <= 10)
        {
            floor--;
            if(floor>=1 && floor <= 10)
            {
                cout<<"The elevator moves at floor number: "<<floor<<endl;
            }
        }
    }
    void display()
    {
        cout<<floor<<endl;
    }
};
int main()
{
    Elevator e;
    cout<<"Current floor is: "<<endl;
    e.display();
    cout<<"After using ++"<<endl;
    ++e;
    cout<<"After using --"<<endl;
    --e;
    return 0;
}
