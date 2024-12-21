#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, j, m;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>m;
            if(m==1)
            {
                cout<<abs(3-i)+abs(3-j);
            }
        }
    }
    return 0;
}

