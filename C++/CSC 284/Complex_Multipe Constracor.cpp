#include<iostream>
using namespace std;
class Complex
{
    int real, imaginary;
public:
    Complex(int x=0, int y=0)
    {
        real = x;
        imaginary = y;
    }
    Complex(int a)
    {
        real = imaginary = a;
    }
    friend void show(Complex c);
    friend Complex sum(Complex c1, Complex c2);
};
void show(Complex c)
{
    cout<<c.real<<" + "<<c.imaginary<<" i "<<endl;
}
Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real+ c2.real;
    c3.imaginary = c1.imaginary+c2.imaginary;
    return c3;
}
int main()
{
    Complex a(2,3);
    show(a);
    Complex b(3);
    show(b);
    Complex d = sum(a,b);
    show(d);
}
