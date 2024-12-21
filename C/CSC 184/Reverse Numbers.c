#include<stdio.h>
main()
{
    int x, r, s=0;
    printf("Input The Number\n");
    scanf("%d", &x);
    while (x!=0)
    {
        r=x%10;
        s=(s*10)+r;
        x=x/10;
    }
    printf("The reverse number is: %d", s );
}
