#include <iostream>
#include <math.h>
using namespace std;
inline double exponentOfNum (double base, int power)
{
return pow(base, power);
}
int main()
{
double base;
int power;
cout << "Enter the base: ";
cin >> base;
cout << "Enter the power: ";
cin >> power;
cout << base << " raised to the power of " << power << " is = " << exponentOfNum (base,
power);

}
