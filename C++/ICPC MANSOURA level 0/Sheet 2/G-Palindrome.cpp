#include<iostream>
#include<cmath>
using namespace std;
class Pal
{
public:
    int N;
    void get()
    {
        cin>>N;
    }
};
int main()
{
    Pal c;
    int *A= new int [c.N];
    int i,k,l;
    bool b;
    c.get();
    if(c.N>=1 && c.N<=pow(10,5))
    {
        for(i=0; i<c.N; i++)
        {
            cin>>A[i];
            if(A[i]>=1 && A[i]<=pow(10,9))
            {
                b = true;
            }
            else
            {
                break;
            }
        }
        if(b)
        {
            bool pallindrom = true;
        for(i=0; i<c.N/2; i++)
        {
            if(A[i]!=A[c.N-1-i])
            {
                pallindrom = false;
                break;
            }
        }
        if(pallindrom)
        {
            cout<<"YES";
        }
        else
        {
        cout<<"NO";
        }
        }
    }
    delete [] A;
    return 0;
}
