#include<iostream>
#include<cmath>
using namespace std;
class square
{
public:
    long long n, m, a, x, y;
    void get()
    {
        cin>>n>>m>>a;
        if((n%a)==0)
            {
                x=n/a;
            }
            else
            {
                x=(n/a)+1;
            }
            if((m%a)==0)
            {
                y=m/a;
            }
            else
            {
                y=(m/a)+1;
            }
    }
    void out()
    {
        cout<<x*y;
    }
};
int main()
{
    square s;
    s.get();
    s.out();
    return 0;
}
