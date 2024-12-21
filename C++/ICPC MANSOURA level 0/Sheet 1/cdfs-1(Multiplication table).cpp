#include<iostream>
using namespace std;
class mul
{
    int N, x;
public:
    mul()
    {
        cin>>N;
        if(N>= 1 && N<=1000)
        {
            for(int i =1; i<=10; i++)
            {
                cout<<i<<" x "<<N<<" = "<<i*N<<endl;
            }
        }
    }
};
int main()
{
    mul m;
}
