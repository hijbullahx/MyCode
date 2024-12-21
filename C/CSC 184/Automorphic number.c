#include <stdio.h>

void automorphic(int n)
{
    int sqr, nd=0, i,d, ld;
    sqr = n * n;

    for (i=n; i != 0; i /= 10) {
        nd++;
    }
   d = 1;
    for ( i = 0; i < nd; i++) {
        d *= 10;
    }
    ld = sqr % d;
    if (ld == n) {
        printf("%d is an Automorphic Number\n", n);
    }
    else {
        printf("%d is not an Automorphic Number\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    automorphic(n);

    return 0;
}
