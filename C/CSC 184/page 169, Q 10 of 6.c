#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c, x, d, p, X1, X2;
    Math:
    printf("Input the Values of a b and c\n");
        scanf("%f%f%f", &a, &b, &c);
        x = -c/b;
        d = (b*b)-(4*a*c);
        p = sqrt(d);
        X1 = ((-b+p)/2*a);
        X2 = ((-b-p)/2*a);
        (a==0 && b==0)?(printf("No solution"))
        :((a==0)?(printf("There are only one root=%f\n",x))
        :((d<0)?(printf("There are no real roots"))
        :(printf("There are two real roots:%f\t%f",X1,X2))));
        printf("\n");
        goto Math;
}
