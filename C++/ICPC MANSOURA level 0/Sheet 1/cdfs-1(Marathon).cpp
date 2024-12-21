#include<iostream>
#include<vector>
using namespace std;
class marathon
{
    public:

    int a, b, c, d, t, count;
    vector<int>e;
    marathon()
    {
        cin>>t;
        if(t>=1 && t<= 10000)
        {
            for(int i = 0; i< t; i++)
            {
                cin>> a >> b >> c >>d;
                cout<<endl;
                count =0;
                if(a<b)
                        {
                            count++;
                        }
                    if(a<c)
                    {
                        count++;
                    }
                    if(a<d)
                    {
                        count++;
                    }

                        e.push_back(count);
            }

        }
    }
};

int main()
{
    marathon m;
    for(int i=0; i<m.t; i++)
    {
        cout<<m.e[i];
        cout<<endl;
    }
}
