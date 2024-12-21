#include<stdio.h>
#include<conio.h>
int main()
{
    float x1,x2, y1, y2, a, b, r;
    printf("Enter the values of x1, x2, y1 and y2\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    a = (x2-x1)*(x2-x1);
    b = (y2-y1)*(y2-y1);
    r = sqrt(a+b);
    printf("Distance between the said points: %f", r);
    return 0;
}
