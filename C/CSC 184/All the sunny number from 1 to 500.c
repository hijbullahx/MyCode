#include<stdio.h>
main()
{
    int x=1, y;

    printf("sunny numbers are:");
    while (x<=500)
    {
          y=x+1;
        if (sqrt(y)== (int)sqrt(y))
        {printf("%d\t",x);}
        x++;

    }
}
