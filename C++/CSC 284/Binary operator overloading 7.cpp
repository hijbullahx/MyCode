/*Implement an Alien class that has attributes like strength, technology level, and diplomacy.
Overload the > operator to determine which alien race is more dominant based on these
attributes.*/
#include<iostream>
using namespace std;
class Alien
{
    double strength, technology, diplomacy;
public:
    Alien(double s, double t, double d)
    {
        strength = s;
        technology = t;
        diplomacy = d;
    }
    double cal()
    {
        return strength+technology+diplomacy;
    }
    bool operator >(Alien &another)
    {
        return cal()>another.cal();
    }
    void display()
    {
        cout<<"Strength: "<<strength<<" Technology: "<<technology<<" Diplomacy: "<<diplomacy<<endl;
    }
};
int main()
{
    cout<<"Race-1: "<<endl;
    Alien race1(10,20,4);
    race1.cal();
    race1.display();
    cout<<"Race-2: "<<endl;
    Alien race2(50,30,100);
    race2.cal();
    race2.display();
    cout<<"Dominant Race is: ";
    if(race1>race2)
    {
        cout<<"Race 1 is the dominant!"<<endl;
    }
    else
    {
        cout<<"RAce 2 is the dominant!"<<endl;
    }
    return 0;
}
