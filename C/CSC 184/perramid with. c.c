#include<stdio.h>

main()
{
    int r, c;
    for(r=1; r<=10; r++)
    {
        for(c=1; c<=10-r; c++)
    {
        printf("  ");

    }
    for (c=1; c<= (2*r-1); c++)
    {
        printf("* ");
    }
    printf("\n");
    }
for(r=9; r>=1; r--)
    {
        for(c=1; c<=10-r; c++)
    {
        printf("  ");

    }
    for (c=1; c<= (2*r-1); c++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
