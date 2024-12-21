/*Design a Spell class that represents magical spells with attributes like power and element
type. Overload the == operator to compare two spells based on their potency and effects.*/
#include<iostream>
using namespace std;
class Spell
{
    double power, element;
public:
    Spell(double p, double e)
    {
        power = p;
        element = e;
    }
    bool operator ==(Spell &another)
    {
        return power==another.power && element == another.element;
    }
    void display()
    {
        cout<<"Spells power: "<<power<<", Spells effect: "<<element<<endl;
    }
};
int main()
{
    cout<<"First spell: ";
    Spell s1(10,20);
    s1.display();
    cout<<"Second spell: ";
    Spell s2(10,20);
    s2.display();
    if(s1==s2)
    {
        cout<<"First spell and second spell have same potency and effect! "<<endl;
    }
    else
    {
        cout<<"First spell and second spell don't have same potency and effect! "<<endl;
    }
    return 0;
}
