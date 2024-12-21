/*Implement a &quot;Player&quot; class with an energy gauge that ranges from 0 to 100. Overload the
unary operator ! to represent the player&#39;s energy being depleted. Each usage of the operator
should decrease the energy level by a fixed amount.*/
#include<iostream>
using namespace std;
class Player
{
    int energy, fixed_energy = 10;
public:
    Player()
    {
        cout<<"Enter the Player's energy: ";
        cin>>energy;
    }
    void display()
    {
        if(energy>=0 && energy <= 100)
        {
            cout<<"Energy is: "<<energy<<endl;
        }
        else
        {
            cout<<"Not allowed!"<<endl;
        }
    }
    void operator !()
    {
        energy = max(energy - fixed_energy,0);
    }
};
int main()
{
    Player p;
    cout<<"Player's current ";
    p.display();
    cout<<"After using operator ";
    !p;
    p.display();
    return 0;
}
