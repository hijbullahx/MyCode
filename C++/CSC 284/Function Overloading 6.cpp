/*Frank is working on a financial application in C++. He wants to allow users to perform
arithmetic operations on currency values, which are represented as decimals with a fixed
number of decimal places. He uses function overloading to define different versions of
the arithmetic functions that take decimal values with different precisions.*/
#include<iostream>
#include<iomanip>
using namespace std;
class Frank
{
public:
    void arithmetic(double currency)
    {
        cout<<"Fixed precisions: "<<currency<<endl;
    }
    void arithmetic(double currency, int precisions)
    {
        cout<<"Precisions "<<precisions<<": "<<fixed<<setprecision(precisions)<<currency<<endl;
    }
};
int main()
{
    Frank f;
    double c = 123.4567890;
    f.arithmetic(c);
    f.arithmetic(c,3);
    f.arithmetic(c,5);
    return 0;
}
