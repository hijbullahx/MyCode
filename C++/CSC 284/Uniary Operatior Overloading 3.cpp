/*Design a "RollerCoaster" class that simulates a ride with excitement levels ranging from 1 to
10. Overload the unary operator - to represent a decrease in the excitement level when the
roller coaster experiences a scary part. Each usage of the operator should decrease the
excitement level by 1 until it reaches 1.*/
#include<iostream>
using namespace std;
class RollerCoaster
{
public:
    int level;
    void get_level()
    {
        cout<<"Enter excitement level: ";
        cin>>level;
    }
    void operator -()
    {
        if(level>=1 && level <= 10)
        {
            level = level - 1;
        }
    }
};
int main()
{
    RollerCoaster r;
    r.get_level();
    -r;
    if(r.level>=1)
    {
        cout<<"Decreased Excitement level: "<<r.level<<endl;
    }
    return 0;
}

