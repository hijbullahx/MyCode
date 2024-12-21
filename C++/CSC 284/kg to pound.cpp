#include <iostream>
using namespace std;
inline double ptok(double p)
{
return p * 0.453592;
}
int main()
{
double pound, kilogram;
cout<< "Enter weight in pounds: " << endl;
cin>> pound;
cout<< pound << " pound is = " << ptok(pound);

}
