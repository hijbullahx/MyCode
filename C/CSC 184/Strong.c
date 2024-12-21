#include<stdio.h>
main()
{
    int n,r, i, j, f, str=0;
    scanf("%d", &n);
    for (i=n; i!=0; i/=10)
    {
        r=i%10;
        f=1;

    for (j=1; j<=r; j++)
    {
       f=f*j;
    }
    str=str+f;
    }
    if (str==n)
    {
        printf("Strong");

    }
    else
    {
        printf("Not Strong");
    }
}
