/*This program define a class called Point that stores the x
and y coordinates of a point. The class uses parameterized
constructor for initializing the class objects.*/
#include<iostream>
using namespace std;
class Point
{
    int x, y;
public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"X= "<<x<<" Y= "<<y<<endl;
    }
};
int main()
{
    Point p1(1,1);
    Point p2(5,10);
    cout<<"Point P1: ";
    p1.display();
    cout<<"Point P2: ";
    p2.display();
    return 0;
}
