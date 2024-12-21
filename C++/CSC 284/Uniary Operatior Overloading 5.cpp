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
    void Display()
    {
        cout<<"Current position: "<<position<<endl;
    }
    void operator +()
    {
        if(position==0)
        {
            position = 360-fixedAngle;
        }
        else if(position>0 && position <fixedAngle)
        {
            int temp = fixedAngle - position;
            position = 360 - temp;
        }
        else
        {
            position -= fixedAngle;
        }
    }
    void operator -()
    {
        if(position==360)
        {
            position = 0+fixedAngle;
        }
        else if(position<360 && position > (360 - fixedAngle))
        {
            int temp = 360 - position;
            position = fixedAngle - temp;
        }
        else
        {
            position += fixedAngle;
        }
    }
};

int main()
{
    Compass c;
    -c;
    c.Display();
    return 0;
}

