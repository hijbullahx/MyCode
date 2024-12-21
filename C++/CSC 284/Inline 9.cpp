#include<iostream>
using namespace std;
inline void number()
{
    int sum = 0;
    for(int i = 100; i<=200; i++)
    {
        if(i%9 == 0)
        {
            cout<<i<<" "<<endl;
            sum = sum + i;
        }
    }
    cout<<"Sum: "<<sum;
}
int main()
{
    number();
}
