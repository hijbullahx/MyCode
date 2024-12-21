/*Grace is building a physics engine in C++. She wants to allow users to simulate objects
with different physical properties, such as mass, velocity, and elasticity. She uses
function overloading to define different versions of the simulate() function that take
different combinations of parameters for physical properties.*/
#include<iostream>
#include<cmath>
using namespace std;
class Physics
{
public:
    void simulate(float mass)
    {
        cout<<"Mass: "<<mass<<"kg"<<endl;
    }
    void simulate(int velocity)
    {
        cout<<"Velocity "<<velocity<<"m/s"<<endl;
    }
    void simulate(double elasticity)
    {
        cout<<"Elasticity: "<<elasticity<<endl;
    }
};
int main()
{
    Physics p;
    float ma = 50.5;
    int v = 7;
    double e = pow(10,3);
    p.simulate(ma);
    p.simulate(v);
    p.simulate(e);
    return 0;
}
