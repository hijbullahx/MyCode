#include<iostream>
using namespace std;
int main()
{
    long long N, RN=0, ORN;
    cin>>N;
    ORN=N;
    while(N>0)
    {
        RN = RN*10+(N%10);
        N=N/10;
    }
    cout<<RN<<endl;
    if(RN==ORN)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
