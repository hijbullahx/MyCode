#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;

public:
    Circle(float x)
    {
        radius = x;
    }
    float get_circumference()
    {
        return 2 * 3.1416 * radius;
    }
};
int main()
{
    float a;
    cout << "Enter The Radius of The Circle: ";
    cin >> a;

    Circle c(a);
    cout << "Circumference of the circle is: " << c.get_circumference();
    return 0;
}
