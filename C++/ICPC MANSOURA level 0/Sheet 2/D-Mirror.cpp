#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
class Mirror
{
public:
    int N, x;
    void get()
    {
        cin>>N;
    }
};
int main()
{
    Mirror m;
    int size = max(1, int(pow(10,5)));
    int *x=new int[size];
    int nh;
    m.get();
    if(m.N>=2 && m.N<= pow(10,5))
        {
            for(int i=0; i<m.N; i++)
            {
                cin>>x[i];
            }

                sort(x, x+m.N);
            for(int i=0; i<m.N/2; i++)
            {
                cout<<x[i]<<" ";
            }
            for(int i=(m.N/2)-1; i>=0; i--)
            {
                cout<<x[i]<<" ";
            }
            cout<<endl;
            sort(x, x+m.N, greater<int>());
            for(int i=0; i<m.N/2; i++)
            {
                cout<<x[i]<<" ";
            }
            for(int i=(m.N/2)-1; i>=0; i--)
            {
                cout<<x[i]<<" ";
            }

            delete [] x;
        }
    return 0;
}
