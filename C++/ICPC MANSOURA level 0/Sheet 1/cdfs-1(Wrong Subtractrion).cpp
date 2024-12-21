#include<iostream>
#include<cmath>
using namespace std;
class sub
{
    int n,k,x;
public:
    sub()
    {
        cin>>n>>k;
        if((n>=2 && n<= pow(10,9))&& (k>=1 && k<=50))
        {
            for(int i = 0; i< k; i++)
        {
            if(n%10 != 0)
                {
                    x = n-1;
                }
            else if(n%10 == 0)
                {
                    x = n/10;
                }
                n=x;
        }
                cout<<x;
        }
    }
};
int main()
{
    sub s;
}
