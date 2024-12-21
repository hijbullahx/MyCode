#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Find
{
    int N, x, a;
    vector <int> h;
public:
    Find()
    {
        cin>>N>>x;
        if(N>=1 && N<=pow(10,5) && x>=1 && x<=pow(10,5))
        {
           for(int i =0; i<N; i++)
        {
            cin>>a;
            if(a>= 1 && a<= pow(10,5))
            {
                h.push_back(a);
            }
        }
        bool found = false;
        for(int i =0; i<N; i++)
        {
            if(x == h[i])
            {
                cout<<i;
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout<<"Not Found";
        }
        }
    }
};
int main()
{
    Find f;
}

