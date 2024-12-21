#include<iostream>
using namespace std;
int main()
{
    long long x;
    while(cin>>x)
    {
        if(x == 1999)
        {
            cout<<"Correct"<<endl;
            return 0;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
