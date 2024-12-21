#include<stdio.h>
#include<math.h>
void main()
{
    int n,d=0,r,i;
    double nn=0;
    for(n=1;n<=1000;n++)
    {
        for(i=n;i!=0;i=i/10)
        {
            d++;
        }
        for(i=n;i!=0;i=i/10)
        {
            r=i%10;
            nn+=pow(r,d);
        }
        if(nn==n)
        {
            printf("%lf",nn);
        }
    }
}
