#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
class order
{
public:
    int N,A;
    vector <int> h;
    vector <int> a;
    int minval = pow(10,6);
    void input()
    {
        cin>>N;
        if(N>=1 && N<= pow(10,5))
            {
                for(int i=0; i<N; i++)
                    {
                        cin>>A;
                        if(A>= 1 && A<= pow(10,5))
                        {
                            h.push_back(A);
                        }
                        else
                        {
                            break;
                        }
                    }
            }
    }
    void ascending()
    {
        sort(h.begin(), h.end());
        for(int i=0; i<N; i++)
            {
                cout<<h[i]<<" ";
            }
    }
    void descending()
    {
        sort(h.begin(),h.end(),greater <int>());
        for(int i=0; i<N; i++)
            {
                cout<<h[i]<<" ";
            }
    }
};
int main()
{
    order o;
    o.input();
    o.ascending();
    cout<<endl;
    o.descending();
}
