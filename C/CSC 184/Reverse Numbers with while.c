#include<stdio.h>
main()
{
    int n, s=0,r;
    scanf("%d", &n);
    while (n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;

    }
    printf("The Reverse Number is:%d", s);
}
