/*Create a Musician class that represents a musician with skills like guitar, vocals, and drums.
Overload the + operator to combine two musicians, creating a new musician with their
collective skills.*/
#include<iostream>
using namespace std;
class Musician
{
    double guiter, vocals, drums;
public:
    Musician(double a, double b, double c)
    {
        guiter = a;
        vocals = b;
        drums = c;
    }
    Musician operator +(Musician &another)
    {
        double guiter1 = guiter + another.guiter;
        double vocal1 = vocals + another.vocals;
        double drums1 = drums + another.drums;
        return Musician(guiter1, vocal1, drums1);
    }
    void display()
    {
        cout<<"Skills with guitar level: "<<guiter<<", Skills with vocal level: "<<vocals<<", Skill with drum level: "<<drums<<endl;
    }
};
int main()
{
    cout<<"First Musician skills: "<<endl;
    Musician m1(10,20,30);
    m1.display();
    cout<<"Second Musician skills: "<<endl;
    Musician m2(20,30,400);
    m2.display();
    cout<<"Collective skills: "<<endl;
    Musician collective = m1+m2;
    collective.display();
    return 0;
}
