#include<iostream>
using namespace std;
int main()
{
    long long eyes, mouth, body;
    cin>>eyes>>mouth>>body;
    long long minv = 0;
    if(eyes < mouth && eyes < body)
    {
        minv = eyes;
    }
    else if(mouth<eyes && mouth < body)
    {
        minv=  mouth;
    }
    else if(body< eyes && body<mouth)
    {
        minv = body;
    }
    long long neyes = (eyes - minv)/2;
    long long nbody = body - minv;
    long long nmouth = mouth - minv;
    if(neyes < nbody)
    {
        cout<<neyes+minv<<endl;
    }
    else if(nbody <  neyes)
    {
        cout<<nbody+minv<<endl;
    }

    return 0;

}
