#include<stdio.h>
int prime();
int prime()
{
   int n, f=0, d;
    scanf("%d", &n);
    for (d=2; d<(n-1); d++)
    {
        if (n%d==0)
        {
            f++;
            break;
        }
    }
    return f;
}
main()
{
    if (f==0)
    {
        printf("Prime Number");

    }
    else
        {
            printf("Not Prime Number");
        }
}



