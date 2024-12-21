#include<iostream>
using namespace std;
int main()
{
    int N, i,j;
    cin>>N;
    for (i = 2; i<=N; i++)
    {
        bool isprime = true;
        for(j = 2; j<i; j++)
        {
            if(i%j == 0)
            {
                isprime = false;
                break;
            }
        }
        if(isprime)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
