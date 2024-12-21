#include<iostream>
using namespace std;
int main()
{
    int N,T;
    cin>>T;
    if(T>=1 && T<=15)
    {
        for(int i=0; i<T; i++)
        {
            cin>>N;
            if(N>=0 && N<=20)
            {
                long long a=1;
                for(int i=1; i<=N; i++)
                {
                    a=a*i;
                }
                cout<<a<<endl;
            }

        }
    }

    return 0;
}
