/*Sum of the series Using friend function (9)in C++.*/
#include<iostream>
using namespace std;
class series
{
    int n, sum = 0, m =9;
public:
    void input()
    {
        cout<<"Enter Terms: ";
        cin>>n;
        cout<<endl;
    }
    friend void sum_series(series s);
};
void sum_series(series s)
{
    for(int i = 0; i< s.n; i++)
    {
       s.sum = s.sum + s.m;
       s.m = 10*s.m + 9;
    }
    cout<<"The Sum of the series is: "<<s.sum<<endl;
}
int main()
{
    series s;
    s.input();
    sum_series(s);
}
