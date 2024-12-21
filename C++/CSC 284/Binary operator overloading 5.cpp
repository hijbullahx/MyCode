/*Create a Spaceship class that represents a spaceship with attributes like fuel capacity and
cargo capacity. Overload the << operator to display the spaceship's vital information in a
user-friendly format.*/
#include<iostream>
using namespace std;
class Spaceship
{
    double fuel, cargo;
public:
    Spaceship(double x, double y)
    {
        fuel = x;
        cargo = y;
    }
    Spaceship operator <<(Spaceship &another)
    {
        double space1 = fuel + another.fuel;
        double space2 = cargo + another.cargo;
        return Spaceship(space1, space2);
    }
    void show()
    {
        cout<<"The spaceship's fuel capacitiy is: "<<fuel<<" and cargo capacity is: "<<cargo<<endl;
    }
};
int main()
{
    cout<<"First part: "<<endl;
    Spaceship s1(5, 8);
    s1.show();
    cout<<"Second part: "<<endl;
    Spaceship s2(2,9);
    s2.show();
    cout<<"In total: "<<endl;
    Spaceship s3 = s1<<s2;
    s3.show();
    return 0;
}
