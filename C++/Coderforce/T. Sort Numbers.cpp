#include<iostream>
using namespace std;
int main()
{
    long long A, B, C;
    int D, E, F;
    cin>>A>>B>>C;
    D=A; E=B; F=C;
    if(A>B)
    {
        swap(A,B);
    }
    if(A>C)
    {
        swap(A,C);
    }
    if(B>C)
    {
        swap(B,C);
    }
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    cout<<endl;

    cout<<D<<endl;
    cout<<E<<endl;
    cout<<F<<endl;
    return 0;
}
