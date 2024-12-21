#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int N, i;
    cin>>N;
    int A[N];
    if(N>=2 && N<=1000)
    {
        for(i =0; i<N; i++)
        {
            cin>>A[i];
            if(A[i]<-pow(10,5) || A[i]> pow(10,5))
            {
                return 1;
            }
        }

            int minin = min_element(A, A+N)-A;
            int maxin = max_element(A, A+N)-A;
            swap(A[minin], A[maxin]);
            for(i=0; i<N; i++)
            {
                cout<<A[i];
                if(i<N-1)
                {
                   cout<<" ";
                }
            }
    }
    return 0;
}
