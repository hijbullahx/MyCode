#include <iostream>
using namespace std;
void r_d(int &x)
{
    int r=0;
    while(x!=0)
    {
        int digit=x%10;
        r=r*10+digit;
        x/=10;
    }
    x=r;
}
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a, b;
    cout<<"Enter Number for a: "<<endl;
    cin>>a;;
    cout<<"Enter Number for b: "<<endl;
    cin>>b;
    r_d(a);
    r_d(b);
    swap(a,b);
    cout << "Output: "<<endl;
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    return 0;
}

