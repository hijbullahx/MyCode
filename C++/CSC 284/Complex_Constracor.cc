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
    void show()
    {
        cout<<real<<" + "<<imaginary<<" i "<<endl;

    }
    friend Complex add(Complex c1, Complex c2);
};
Complex add(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}
int main()
{
    Complex a(5, 6);
    a.show();
    Complex b(5, 4);
    b.show();
    Complex c= add(a,b);
    c.show();
    return 0;
}
