#include <iostream>
#include <math.h>
using namespace std;
inline double areaOfcircle(double radius)
{
return 3.1416 * pow(radius, 2);
}
int main()
{
double radius;
cout << "Enter the radius of the circle: " << endl;
cin>> radius;
cout << "The area of the circle is " << areaOfcircle(radius);

}
