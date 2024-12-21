#include<stdio.h>
main()
{
    int r, c;
    {
        for(r=1; r<=10; r++)
        {
            for (c=1; c<=10-r; c++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
