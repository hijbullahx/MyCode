#include<iostream>
using namespace std;
void add(int *a,int *b,int *s)
{
    *s=*a+*b;
}
int main()
{
    int x,y,sum;
    cin>>x>>y;
    add(&x,&y,&sum);
    cout<<sum;
    return 0;
}

