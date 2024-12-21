#include<stdio.h>
main()
{
    int  p=10;
    while(p<=2000)
    {
        int s=0;
        int x=p;

    while (x>0)
    {
        int r=x%10;
         s=(s*10)+r;
         x=x/10;
    }

    if (p==s)
    {
        printf("%d\t", p);
    }
    p++;
    }
}
