#include<iostream>
using namespace std;
int r, n;
void reverse_dig(int *n)
{
    for(int i= 0; i<*n; i++)
    {
        int r;
        r = *n%10;
        cout<<r<<" ";
        *n = *n/10;
    }
}
void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<endl;
    couত<<b;
}
int main()
{
    int n1= 456;
    int n2 = 355;
    reverse_dig(&n1);
    cout<<endl;
    reverse_dig(&n2);
    cout<<"After Swapping: "<<endl;
    Swap(n1, n2);
}
