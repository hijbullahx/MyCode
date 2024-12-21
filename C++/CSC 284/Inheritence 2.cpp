/*Create a class named Shape with data members to store the width and height of a
shape. Create another class named Rectangle that inherits from the Shape class and
has a method to calculate the area of the rectangle. Write a program to create a
Rectangle object and print out its area.*/
#include<iostream>
using namespace std;
class Shape
{
protected:
    float width, height;
public:
    void input()
    {
        cout<<"Enter Width: ";
        cin>>width;
        cout<<"Enter Height: ";
        cin>>height;
    }
};
class Rectangle : public Shape
{
    float area;
public:
    void equation()
    {
       area = width*height;
       cout<<"Area of the rectangle is: "<<area;
    }
};
int main()
{
    Rectangle r;
    r.input();
    r.equation();
}
