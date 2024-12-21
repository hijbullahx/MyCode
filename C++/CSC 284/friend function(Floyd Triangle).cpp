/*Write a program in C++ to print Floyd’s Triangle by using the friend
function*/
#include<iostream>
using namespace std;
class f_triangle
{
protected:
    int n, count =1;
public:
    void input()
    {
        cout<<"Input How many rows do you want!"<<endl;
        cin>>n;
    }
    friend void f(f_triangle& a);
};
void f(f_triangle& a)
    {
    for(int i =1; i<=a.n; i++)
    {
        for (int j =1; j<i+1; j++)
        {
            cout<<a.count<<" ";
            a.count++;
        }
        cout<<endl;
    }
    }
int main()
{
    f_triangle a;
    a.input();
    f(a);
}
