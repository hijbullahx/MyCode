#include<iostream>
#include<vector>
using namespace std;
class lucky
{
    int t,n;
    vector<vector<int>>e;
public:
    lucky()
    {
        cin>>t;
        if(t>=1 && t<=1000)
        {
            for(int i =0; i<t; i++)
            {
                cin>>n;
                int d6 = n%10;
                int d5 = (n/10)%10;
                int d4 = (n/100)%10;
                int d3 = (n/1000)%10;
                int d2 = (n/10000)%10;
                int d1 = (n/100000)%10;
                e.emplace_back(vector<int>{d1,d2,d3,d4,d5,d6});
            }
            for(int j =0; j<t; j++)
            {
                if((e[j][0]+e[j][1]+e[j][2]) == (e[j][3]+e[j][4]+e[j][5]))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
};
int main()
{
    lucky l;
}

