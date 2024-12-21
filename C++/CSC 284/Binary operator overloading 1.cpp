/*Create a Superhero class with attributes like strength, speed, and intelligence. Overload the
+ operator to simulate a battle between two superheroes. The hero with the higher
combined attributes wins the fight.*/
#include<iostream>
using namespace std;
class Superhero
{
    int strength, speed, intelligence;
public:
    Superhero(int x, int y, int z)
    {
        strength = x;
        speed = y;
        intelligence = z;
    }
    int get()
    {
        return strength + speed + intelligence;
    }
    bool operator +(Superhero &super)
    {
        return get()> super.get();
    }
    void display()
    {
        cout<<"Strength: "<<strength<<", Speed: "<<speed<<", Intelligence: "<<intelligence<<endl;
    }
};
int main()
{
    Superhero hero1(10, 10, 30);
    Superhero hero2(20, 10, 30);
    cout<<"Hero1: "<<endl;
    hero1.display();
    hero1.get();
    cout<<"Hero2: "<<endl;
    hero2.display();
    hero2.get();
    if(hero1+hero2)
    {
        cout<<"Super hero 1 wins the battle!"<<endl;
    }
    else
    {
        cout<<"Superhero 2 Wins the battle!"<<endl;
    }
    return 0;
}
