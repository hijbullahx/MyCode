#include<iostream>
using namespace std;
int main()
{
    int A, B;
    double C;
    char S, Q;
    cin>>A>>S>>B>>Q>>C;
    if(A>=0 && B<=100)
    {
        if(S == '+')
    {
        if((A+B) == C)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
        cout<<A+B<<endl;
        }
    }

    else if(S == '-')
    {
        if( (A-B) == C)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
        cout<<A-B<<endl;
        }
    }
    else if(S == '*')
    {
        if( (A*B) == C)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
        cout<<A*B<<endl;
        }
    }
    }

    return 0;
}
