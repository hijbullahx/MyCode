#include<stdio.h>
main()
{
    int n=1, c=0, sum=0;
    IUBAT:
        if( n%6==0 && n%4!=0)
        {
            printf("%d\t",n);
            c++;
            sum=sum+n;
        }
        n++;
        if (n<=100)
        {
            goto IUBAT;
        }
        printf("\nWe have %d numbers", c);
        printf("\nThe sum of this numbers is %d", sum);
}
