/*Build a "Compass" class that simulates a compass needle pointing to a specific direction.
Overload the unary operator + to represent a clockwise rotation of the needle by a certain
angle, and - to represent an anticlockwise rotation by the same angle.*/
#include<iostream>
using namespace std;
class Compass
{
    int position;
    const int fixedAngle = 15;
public:
    Compass()
    {
        cout<<"Enter the initial position: ";
        cin>>position;
    }
    void display()
    {
        cout<<"Current position is: "<<position<<endl;
    }
    void operator +()
    {
        if(position == 0)
        {
            position = 360 - fixedAngle;
        }
        else if(position>0 && position < fixedAngle)
        {
            int temp = fixedAngle - position;
            position = 360- temp;
        }
        else
        {
            position-=fixedAngle;
        }
        cout<<"Clockwise rotation is: "<<position<<endl;
    }
    void operator -()
    {
        if(position == 360)
        {
            position = 0+ fixedAngle;
        }
        else if(position<360 && position > (360-fixedAngle))
        {
            int temp = 360 - position;
            position = fixedAngle - temp;
        }
        else
        {
            position+=fixedAngle;
        }
        cout<<"Anti-Clockwise rotation is: "<<position<<endl;
    }
};
int main()
{
    Compass c;
    c.display();
    +c;
    -c;
    return 0;
}
