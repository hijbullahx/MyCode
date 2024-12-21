#include<stdio.h>
double arm();
double arm()
{
    int i,d=0,r,n, nn;
double nn=0.0;
    scanf("%d", &n);
    for (i=n; i!=0; i=i/10)
    {
        d++;
    }
    for (i=n; i!=0; i=i/10)
    {
        r= i%10;
        nn=nn+ pow(r,d);
    }
    return nn;
}
main()
{
    int n;
    double a;
    a=arm();
    scanf("%d", &n);
    if (a==n)
    {
        printf("Armstrong");

    }
    else
    {
        printf("Not Armstrong");
    }
}

