/*Implement an Alien class that has attributes like strength, technology level, and diplomacy.
Overload the > operator to determine which alien race is more dominant based on these
attributes.*/
#include<iostream>
using namespace std;
class Alien
{
public:
    int strength, tech_level, diplomecy;
    Alien(int s, int t, int d)
    {
        strength = s;
        tech_level = t;
        diplomecy = d;
    }
    int cal()
    {
        return strength+tech_level+diplomecy;
    }
    bool operator >(Alien &another)
    {
        return cal()> another.cal();
    }
};
int main()
{
    Alien a1(10,10,20);
    a1.cal();
    Alien a2(5,2,7);
    a2.cal();
    if(a1>a2)
    {
        cout<<"Alien 1 race is best!"<<endl;
    }
    else
    {
        cout<<"Alien 2 race is best! "<<endl;
    }
    return 0;
}
