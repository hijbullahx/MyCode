/*C++ Program to print a pattern of the right-angle triangle using friend function*/
#include<iostream>
using namespace std;
class pattern
{
    int r;
public:
    void input()
    {
        cout<<"How many rows: ";
        cin>> r;
    }
    friend void pattern_t(pattern t);
};
void pattern_t(pattern t)
{
    for(int i = 1; i<=t.r; i++)
    {
         for (int j = 1; j<=i; j++)
        {
              cout<<"* ";

        }
        cout<<endl;

    }
}
int main()
{
    pattern t;
    t.input();
    pattern_t(t);
}
