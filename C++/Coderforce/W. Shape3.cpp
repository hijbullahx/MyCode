#include<iostream>
using namespace std;
int main()
{
    int N, a;
    cin>>N;
    a=N;

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<a; j++)
            {
                cout<<" ";
            }
            for(int k=0;k<=a;k++)
            {
                cout<<"*";
            }
            a--;
            cout<<endl;
        }
}
