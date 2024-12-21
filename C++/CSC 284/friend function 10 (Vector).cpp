/*Define a class Vector with private members for x, y, and z components. Write a friend function
that takes two Vector objects as parameters and returns the dot product.*/
#include<iostream>
using namespace std;
class Vector
{
    int x, y, z;
public:
    Vector(int first, int second, int third)
    {
      x = first;
      y = second;
      z= third;
    }
    friend int product(Vector v1, Vector v2);
};
int product(Vector v1, Vector v2)
{
    int v3 = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    return v3;
}
int main()
{
    int x1, y1, z1;
    cout<<"Enter The Value of x for the first vector: ";
    cin>>x1;
    cout<<"Enter The Value of y for the first vector: ";
    cin>>y1;
    cout<<"Enter The Value of z for the first vector: ";
    cin>>z1;
    Vector v1(x1,y1,z1);
    int x2, y2, z2;
    cout<<"Enter The Value of x for the Second vector: ";
    cin>>x2;
    cout<<"Enter The Value of y for the Second vector: ";
    cin>>y2;
    cout<<"Enter The Value of z for the Second vector: ";
    cin>>z2;
    Vector v2(x2,y2,z2);
    int dotproduct = product(v1,v2);
    cout<<dotproduct;

}
