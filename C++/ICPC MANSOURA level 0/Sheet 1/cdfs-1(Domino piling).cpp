#include<iostream>
using namespace std;
class domino
{
    int M,N,x=2, d;
public:
    domino()
    {
        cin>>M>>N;
        if(M>=1 && M<=16 && N>=1 && N<=16)
        {
            d= (M*N)/2;
            cout<<d;
        }
    }
};
int main()
{
    domino d;
    return 0;
}
