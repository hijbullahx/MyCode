#include <iostream>
using namespace std;
void HM(int *n1,int *n2,int *n3,int *max)
{
    if(*n1>*n2&&*n1>*n3)
    {
        *max=*n1;
    }
    else if(*n2>*n1&&*n2>*n3)
    {
        *max=*n2;
    }
    else
    {
        *max=*n3;
    }
}
int main()
{
    int h,k,m,ma;
    cout<<"Enter marks for Hamim ,Kader and Masud"<<endl;
    cin>>h>>k>>m;
    HM(&h,&k,&m,&ma);
    cout<<"The Highest Mark is "<<ma;
    return 0;
}

