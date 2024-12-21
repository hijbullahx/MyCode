/*Alice is developing a calculator application in C++. She wants to allow the user to
perform operations on integers, doubles, and long doubles. To accomplish this, she uses
function overloading to define different versions of the calculate() function that take
different parameter types.*/
#include<iostream>
using namespace std;
class calculator
{
public:
    void calculate(int num1, int num2)
    {
        cout<<"The Integer Operation: "<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    }
    void calculate(double num1, double num2)
    {
        cout<<"The Double Operation: "<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    }
    void calculate(long double num1, long double num2)
    {
        cout<<"The Long Double Operation: "<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    }
};
int main()
{
    calculator c;
    int a, b;
    double x, y;
    long double m, n;
    cout<<"Input Integer Numbers: "<<endl;
    cin>>a>>b;
    cout<<"Input Double Numbers: "<<endl;
    cin>>x>>y;
    cout<<"Input Long Double Numbers: "<<endl;
    cin>>m>>n;
    c.calculate(a,b);
    c.calculate(x,y);
    c.calculate(m,n);
    return 0;
}

