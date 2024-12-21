/*Implement a Potion class that represents a magical potion with properties like potency and
duration. Overload the * operator to combine two potions, creating a new potion with
increased potency and cumulative duration.*/
#include<iostream>
using namespace std;
class Potion
{
    int potency, duration;
public:
    Potion(int x, int y)
    {
        potency = x;
        duration = y;
    }
    Potion operator *(Potion &other)
    {
        int newPotency = potency+other.potency;
        int newDuration = duration + other.duration;
        return Potion(newPotency, newDuration);
    }
    void display()
    {
        cout<<"Potency="<<potency<<", Duration="<<duration<<endl;
    }
};
int main()
{
    Potion p1(2,3);
    Potion p2(3,4);
    p1.display();
    p2.display();
    Potion p3=p1*p2;
    p3.display();
    return 0;
}
