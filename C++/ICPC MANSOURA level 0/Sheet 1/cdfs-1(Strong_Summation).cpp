#include<iostream>
#include<cmath>
using namespace std;
class strange
{
    long long N, M, x;
public:
    strange()
    {
        cin>>N>>M;
        //if (N >= 0 && N <= pow(10, 18) && M >= 0 && M <= pow(10, 18))
        //{
            x = (N%10) + (M%10);
            cout<<x;
        //}
    }
};
int main()
{
    strange s;
    return 0;
}

