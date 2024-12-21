#include<stdio.h>
main()
{
    int i,n,r, rn=0;
    scanf("%d", &n);
    for (i=n; i!=0; i/=10)
    {
        r= i%10;
        rn= (rn*10)+r;
    }
    if (rn==n)
    {
        printf("Palindrom Number");

    }
    else
    {
        printf("Not Palindrom Number");
    }
}
