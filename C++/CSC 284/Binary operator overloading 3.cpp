/*Design a TimeTraveler class that holds the year a person is from. Overload the > operator to
compare two time travelers and determine who comes from a more distant past.*/
#include<iostream>
using namespace std;
class TimeTraveler
{
    int year;
    int traveled_year;
public:
    TimeTraveler(int n)
    {
        year = n;
    }
    int traveled()
    {
        traveled_year = 2023 - year;
    }
    int operator >(TimeTraveler &another)
    {
        return traveled_year>another.traveled_year;
    }
    void display()
    {
        cout<<"Traveled: "<<traveled_year<<" Years!"<<endl;
    }
};
int main()
{
    TimeTraveler t1(2010);
    t1.traveled();
    cout<<"First traveler ";
    t1.display();
    TimeTraveler t2(2002);
    t2.traveled();
    cout<<"Second traveler ";
    t2.display();
    if(t1>t2)
    {
        cout<<"First  Traveler comes from more distance!"<<endl;
    }
    else
    {
        cout<<"Second  Traveler comes from more distance!"<<endl;
    }
    return 0;
}
