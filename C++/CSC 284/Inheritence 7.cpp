/*Create a class named Shape with data members to store the width and height of a
shape. Create another class named Color with a data member to store the color of a
shape. Create a third class named ColoredShape that inherits from both the Shape and
Color classes and has a method to print out the width, height, and color of the shape.
Write a program to create a ColoredShape object and print out its width, height, and
color.*/
/*Multiple Inheritence*/
#include<iostream>
using namespace std;
class Shape
{
protected:
    float width, height;
};
class Color
{
protected:
    string color;
};
class ColoredShape : public Shape, public Color
{
public:
    void get()
    {
        cout<<"Enter Width: ";
        cin>>width;
        cout<<"Enter Height: ";
        cin>>height;
        cout<<"Enter color: ";
        cin>>color;
    }
    void give()
    {
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Color: "<<color<<endl;
    }

};
int main()
{
    ColoredShape c;
    c.get();
    c.give();
    return 0;
}

