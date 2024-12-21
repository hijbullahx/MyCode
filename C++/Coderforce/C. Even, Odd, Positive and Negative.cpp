#include<iostream>
using namespace std;
int main()
{
    long long n, x;
    cin>>n;
    int e = 0, o = 0, p = 0, ne = 0;
    for(int i =0 ; i<n; i++)
    {
        cin>>x;
        if(x%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(x>0)
        {
            p++;
        }
        else if(x<0)
        {
            ne++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<ne<<endl;
    return 0;
}
