#include<iostream>
using namespace std;
class calculator
{
public:
    void Calculate(int num1, int num2)
    {
        cout<<"The addition of integer is: "<<num1+num2<<endl;
    }
    void Calculate(double num1, double num2)
    {
        cout<<"The addition of double is: "<<num1+num2<<endl;
    }
    void Calculate(long double num1, long double num2)
    {
        cout<<"The addition of long double is: "<<num1+num2<<endl;
    }
};
int main()
{
    calculator c;
    int a=10, b= 5;
    double x = 65, y = 73;
    long double m = 23.533, n = 17.230920;
    c.Calculate(a,b);
    c.Calculate(x,y);
    c.Calculate(m,n);
    return 0;
}
