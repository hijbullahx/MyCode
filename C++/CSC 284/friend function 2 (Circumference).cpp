#include<iostream>
using namespace std;
class Circle
{
    float radius, center_point;
public:
    Circle(float x, float y)
    {
        radius = x;
        center_point = y;
    }
    friend float get_circumference(Circle c);
};
float get_circumference(Circle c)
{
    double circumference;
    circumference = 2*3.1416*c.radius;
    return circumference;
}
int main()
{
    float a, b;
    cout<<"Enter The Radius of The Circle: ";
    cin>>a;
    Circle c(a, b);
    cout<<"Circumference of the circle is: "<<get_circumference(c);
}

