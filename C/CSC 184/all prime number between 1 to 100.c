#include<stdio.h>
main()
{
    int n, d, f;
    for (n=1; n<=500; n++)
    {
        f=0;
        for ( d=2; d<=(n-1); d++)
        {
            if (n%d==0)
            {
                f++;
                break;
            }
        }

    if (n!=1 && f==0)
    {
        printf("%d\t",n);
    }
    }

}
