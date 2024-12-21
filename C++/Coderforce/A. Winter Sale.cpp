#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double X, P, mp=1;
    cin>>X>>P;
    mp = ((100*P)/(100-X));
    cout<<fixed<<setprecision(2)<<mp<<endl;
    return 0;
}
