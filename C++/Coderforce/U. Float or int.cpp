#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double a;
    cin>>a;
    if(a == floor(a))
    {
        cout<<"int "<<a<<endl;
    }
    else
    {
        cout<<"float "<<floor(a)<<" "<<a-floor(a)<<endl;
    }
    return 0;
}
