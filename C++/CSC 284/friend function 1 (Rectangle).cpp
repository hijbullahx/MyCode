#include<iostream>
using namespace std;
class Rectangle
{
    float length, width;
public:
    Rectangle(float x, float y)
    {
        length = x;
        width = y;
    }
    friend float display(Rectangle r);
};
float display(Rectangle r)
{
    float area;
    area = r.length * r.width;
    return area;
}
int main()
{
    int a, b;
    cout<<"Enter Length: ";
    cin>>a;
    cout<<"Enter Width: ";
    cin>>b;
    Rectangle r(a,b);
    cout<<"The Area Of The Rectangle is: "<<display(r);
}
