#include<iostream>
using namespace std;
int main()
{
    long long X;
    string a;
    cin>>X;
    for(int i=2; i<X; i++)
    {

        if(X!=2 && X%i == 0  )
        {
            a="NO";
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(a!="NO")
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
