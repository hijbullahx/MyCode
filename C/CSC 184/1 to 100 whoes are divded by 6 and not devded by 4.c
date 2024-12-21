#include<stdio.h>
main()
{
    int n, rn=0, r=0;
    scanf("%d",&n);
    if (n!=0)
    {
        n=n/10;
        r=n%10;
        rn= (rn*10)+r;

    }
            printf("%d",rn);
}
