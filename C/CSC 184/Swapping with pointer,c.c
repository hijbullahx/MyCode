#include<stdio.h>
main()
{
    int a, b, *x, *y, h;
    scanf("%d%d", &a, &b);
    printf("a=%d and b=%d\t", a, b);
    x=&a;
    y=&b;

    h=*x;
    *x=*y;
    *y=h;

    printf("\nAfter swaping a=%d and b=%d", a,b);

}
