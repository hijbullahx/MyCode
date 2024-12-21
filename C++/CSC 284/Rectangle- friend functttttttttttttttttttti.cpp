#include<iostream>
using namespace std;
class Rectangle
{
    float length, width;
    float area;
public:
    Rectangle(float x, float y)
    {
        length = x;
        width = y;
    }
    friend float show(Rectangle R1);
};
float show(Rectangle R1)
{
    float area;
    area = R1.length*R1.width;
    return area;
}
int main()
{
    float a, b;
    cout<<"Length: ";
    cin>>a;
    cout<<"Width: ";
    cin>>b;
    Rectangle R(a,b);
    cout<<show(R);
}
