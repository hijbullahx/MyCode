#include<stdio.h>
main()
{
    int n, d, f=0;

    printf("Input a Number\n");
    scanf("%d", &n);
    for (d=2; d<=(n-1); d++)
    {
        if (n%d==0)
        {
            f++;
            break;
        }

    }
    if (f==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}
