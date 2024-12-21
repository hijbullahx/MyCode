#include<iostream>
using namespace std;
class Shape
{
public:
    double length, breadth;
public:
    virtual double area() = 0;
};
class Rectangle : public Shape
{
public:
    Rectangle(double a, double b)
    {
        length = a;
        breadth = b;
    }
    double area()
    {
        return length * breadth;
    }
};
class Circle : public Shape
{
public:
    Circle(double a)
    {
        length = a;
        breadth = a;
    }
    double area()
    {
        return 3.1416*breadth;
    }
};
int main()
{
    Shape *s;
    Rectangle r(3,5);
    s = &r;
    cout<<"Area of the Rectangle is: "<<s->area()<<endl;
    Circle c(5);
    s = &c;
    cout<<"Area of the Circle is: "<<s->area()<<endl;
    return 0;
}
