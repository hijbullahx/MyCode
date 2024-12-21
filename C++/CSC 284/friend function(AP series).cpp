/*Write a c++ program to find out the sum of an A.P. series by using the friend function.*/
#include<iostream>
using namespace std;
class AP
{
protected:
    int n,s=0;
public:
    void a()

    {
        cout<<"How many terms? ";
    cin>>n;
        for(int i=1; i<n; i++)
    {

        s = s+i;
    }
    }
    friend void output(AP a);
};
void output(AP a)
{
    cout<<"Summation of the AP series is: "<<a.s<<endl;
}
int main()
{
    AP a;
    a.a();
    output(a);
}
