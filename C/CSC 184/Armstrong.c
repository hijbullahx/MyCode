#include<stdio.h>
main()
{
    int n, i, d=0, r;
    double nn=0;
    scanf("%d", &n);
    for (i=n; i!=0; i/=10)
    {
        d++;
    }
    for (i=n; i!=0; i/=10)
    {
        r=i%10;
        nn=nn+pow(r,d);
    }
   if (n==nn)
   {
       printf("Armsrtong");
   }
   else
   {
       printf("Not Armstrong");
   }

}
