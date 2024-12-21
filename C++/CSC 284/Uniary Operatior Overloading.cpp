/*Alice owns a mischievous dog named Max who loves to play hide-and-seek. Implement a
class "Dog" with an overloaded unary operator to represent Max's excitement level. When
Alice uses the ++ operator on Max, his excitement level should increase. When she uses the -
- operator, it should decrease. If the excitement level goes above 100 or below 0, an error
should be raised.*/
#include<iostream>
using namespace std;
class Dog
{
public:
    int excitement_level;
    void operator ++()
    {
        if(excitement_level<=100)
        {
            excitement_level++;
        }
        else
        {
            cout<<"Excitement level can not greater than 100!"<<endl;
        }
    }
    void operator--()
    {
        if(excitement_level>=0)
        {
            excitement_level--;
        }
    }
    void get_level()
    {
        cout<<"Enter Dog's current level: ";
        cin>>excitement_level;
        if(excitement_level>=100 || excitement_level <= 0)
        {
            cout<<"Excitement level can not be less then 0 and greater than 100!"<<endl;
            excitement_level = 0;
        }
    }
};
int main()
{
    Dog Max;
    Max.get_level();
    cout<<"Max's present excitement level: "<<Max.excitement_level<<endl;
    ++Max;
    cout<<"After using ++ Max's Excitement level: "<<Max.excitement_level<<endl;
    --Max;
    cout<<"After using -- Max's Excitement level: "<<Max.excitement_level<<endl;
    return 0;
}
