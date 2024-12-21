#include<iostream>
using namespace std;
class Complex
{
    double real, imaginary;
public:
   void c1()
   {
       cin>>real>>imaginary;
   }
   void c2()
   {
      cin>>real>>imaginary;;
   }
    void show()
    {
        cout<<real<< " + "<<imaginary<<"i"<<endl;
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
    Complex a,b;
    a.c1();

    b.c2();
    a.show();

    b.show();
    Complex c = add(a,b);
    c.show();
    return 0;
}
