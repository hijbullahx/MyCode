#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class low
{
    int N;
    vector <int> A;
public:
    low()
    {
        cin>>N;
        if(N>=2 && N<= 1000)
        {
            A.resize(N);
            int minval= pow(10,6);
            int pos =0;
            for(int i=0; i<N; i++)
            {
                cin>>A[i];
                if(A[i]>=pow(-10,5) && A[i]<= pow(10,5))
                {
                    if(A[i] < minval)
                        {
                            minval = A[i];
                            pos =i+1;
                        }
                }
            }
            cout<<minval<<" "<<pos;
        }
    }

};
int main()
{
    low l;
}
