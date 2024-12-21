#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, x, d, x1, x2;
    scanf("%d%d%d", &a, &b, &c);
    x = -c / b;
    d = (b * b) - (4 * a * c);
    x1 = -b + (sqrt(d) / (2 * a));
    x2 = -b - (sqrt(d) / (2 * a));
    (a == 0 && b == 0) ? (printf("No solution\n")) :
    (a == 0) ? printf("There is only one root\nx=%d", x) :
    (d < 0) ? printf("There is no real root\n %d", d) :
    printf("There are two real roots,\t They are: x1=%d\t x2=%d", x1, x2);
    return 0;
}
