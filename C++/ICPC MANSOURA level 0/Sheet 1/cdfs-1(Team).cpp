#include<iostream>
using namespace std;
class team
{
public:
    int p,v, t, n,count, d=0;
    team()
    {
        cin>>n;
        if(n>=1 && n<=1000)
        {
           for(int i=0; i<n; i++)
        {
            cin>>p>>v>>t;
            cout<<endl;
            count =0;
            if((p == 1 && v == 1)||(p == 1 && t == 1)  || (v == 1&& t== 1))
            {
                count++;
            }
            d = d + count;
        }
        }
    }
};
int main()
{
    team t;
    cout<<t.d;
}
