#include<iostream>
#include<vector>
using namespace std;
class Next
{
public:
    int n, k, a;
    vector <int> h;
    Next()
    {
        cin>>n>>k;
        if(n>=1 && n<= 50 && k>=1 && k<= 50)
        {
            for(int i=0; i<n;i++)
            {
                cin>>a;
                if(a>=0 && a<=100)
                {
                    h.push_back(a);
                }
            }
            int count =0;
            for(int i=0; i<n;i++)
            {
                    if(h[i]>=h[k-1] && h[i]>0)
                    {
                        count++;
                    }

            }
            cout<<count;
        }
    }
};
int main()
{
    Next n;
}
