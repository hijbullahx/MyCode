#include<stdio.h>
main()
{
    int n=1;
    IUBAT:
printf("%d\t",n);
        n++;
        if (n<=100)
        {

            goto IUBAT;
        }
}
