#include<stdio.h>
main()
{
    int x, y;
    printf("Input a number\n");
    scanf("%d", &x);
    y=x+1;
    if(sqrt(y)== (int) sqrt(y))
           {

               printf("%d is a sunny number", x);
           }
           else
           {
                printf("%d is not sunny number", x);
           }

}
