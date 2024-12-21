#include<iostream>
using namespace std;
bool lucky(int n)
{
    while(n>0)
    {
        int digit= n%10;
        if(digit!=4 && digit!=7)
        {
            return false;
        }
        n=n/10;
    }
    return true;
}
int main()
{
    long long A, B;
    cin>>A>>B;
    bool f= false;
    for(int i = A; i<=B; i++)
    {
        if(lucky(i))
        {
            cout<<i<<" ";
            f=true;
        }
    }
    if(!f)
        {
           cout<<-1;
        }
return 0;
}
