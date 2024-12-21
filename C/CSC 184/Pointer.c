#include<stdio.h>
main()
{
    int a, b, *x, *y, h;
    scanf("%d%d", &a, &b);
    printf("Without Swapping\n x=%d\t y=%d\n", a, b);
    x=&a;
    y=&b;
    h=*y;
    *y=*x;
    *x=h;

    printf("After swapping\n x=%d\ty=%d", a, b);
}
