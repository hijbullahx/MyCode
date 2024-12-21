#include<iostream>
using namespace std;
int main()
{
    int A, B,n, gcd =1;
    cin>>A>>B;
    if(A>B)
    {
        n=A;
    }
    else
    {
        n=B;
    }
    for(int i=1; i<=n; i++)
    {
        if(A%i == 0 && B%i == 0)
        {
            gcd =i;
        }
    }
    cout<<gcd<<endl;
}
