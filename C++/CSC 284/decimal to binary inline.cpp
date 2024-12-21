#include<iostream>
using namespace std;
inline void dtob(int d)
{
    if(d>1)
    {
        dtob(d/2);
    }
    cout<<d%2;
}

int main()
{
    int d;
    cin>>d;
    dtob(d);
}
