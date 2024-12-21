#include<iostream>
#include<vector>
using namespace std;
class work
{
public:
    int t, n, l1,l2,l3;
    vector <int> r;
    work()
    {
        cin>>t;
        if(t>=1 && t<= 1000)
        {
            for(int i =0; i<t; i++)
            {
                cin>>n;
                r.push_back(n);
            }
            for(int i =0; i<t; i++)
            {
                cout<<r[i];
            }
        }
    }

};
int main()
{
    work w;
}
