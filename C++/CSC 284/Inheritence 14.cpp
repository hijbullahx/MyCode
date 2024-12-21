/*Create a Shape class with a function that prints "This is a shape.” Create another
Polygon class, inheriting the Shape class with the same function that prints "Polygon

is a shape.” Create two other classes called Rectangle and Triangle having the same
function, which prints "Rectangle is a polygon" and "Triangle is a polygon,"
respectively. Again, another class named Square has the same function, which prints
"Square is a rectangle.” Now, try calling the function by the object of each of these
classes.*/
#include<iostream>
using namespace std;
class Shape
{
public:
    void print()
    {
        cout<<"This is a shape. "<<endl;
    }
};
class Polygon : public Shape
{
public:
    void print()
    {
        cout<<"Polygon is a shape. "<<endl;
    }
};
class Rectangle : public Polygon
{
public:
    void print()
    {
        cout<<"Rectangle is polygone. "<<endl;
    }
};
class Triangle : public Polygon
{
public:
    void print()
    {
        cout<<"Triangle is a polygon. "<<endl;
    }
};
class Square : public Rectangle
{
public:
    void print()
    {
        cout<<"Square is rectangle. "<<endl;
    }
};
int main()
{
    Shape s;
    s.print();
    Polygon p;
    p.print();
    Rectangle r;
    r.print();
    Triangle t;
    t.print();
    Square sq;
    sq.print();
    return 0;
}
