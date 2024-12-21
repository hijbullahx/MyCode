#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class position
{
    public:
        int N;
        vector <int> A;
        vector <int> h;
        void input()
        {
            cin>>N;
            if(N>=2 && N<= 1000)
            {
            A.resize(N);
            for(int i=0; i<N; i++)
            {
                cin>>A[i];
                if(A[i]>=pow(-10,5) && A[i]<= pow(10,5))
                {
                    if(A[i]<=10)
                        {
                            h.push_back(i);
                        }
                }
            }
            for(int i=0; i<h.size(); i++)
            {
                int x= h[i];
                cout<<"A["<<h[i]<<"] = "<<A[x]<<endl;
            }
            }
        }
};
int main()
{
    position p;
    p.input();
}
