/*Write a program to print the name, salary, and date of joining of 10 employees in a
company. Use an array of objects.*/
#include<iostream>
using namespace std;
class emp
{
    public:
        string name;
    void input()
    {
        cin>>name;
    }
    void output()
    {
        cout<<name;
    }
};
int main()
{
    emp e[3];
    for(int i =0; i<3; i++)
    {
        cout<<i+1<<endl;
        e[i].input();
    }
    for(int i =0; i<3; i++)
    {
        e[i].output();
    }

}
