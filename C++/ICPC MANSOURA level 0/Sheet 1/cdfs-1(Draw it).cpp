#include<iostream>
#include<vector>
using namespace std;
class draw
{
public:
    string S;
    int N, Xi;
    vector <int> b;
    draw()
    {
        cin>>S;
        if(S== "+" || S == "-" || S == "*" || S== "/")
        {
            cin>>N;
            if(N>=1 && N<= 50)
            {
                for(int i =0; i< N; i++)
                    {
                        cin>>Xi;
                        if(Xi >= 1 && Xi <= 100)
                            {
                                b.push_back(Xi);
                            }
                    }
            }
        }
    }
};
int main()
{
    draw d;
    for(int i =0; i<d.N; i++)
    {
        for(int j =0; j<d.b[i]; j++)
        {
            cout<<d.S;
        }
        cout<<endl;
    }

}
