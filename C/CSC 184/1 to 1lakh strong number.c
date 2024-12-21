#include<stdio.h>
main()
{
    int n, j, f, i, nn, r;
    for (n=1; n<=100000; n++)
    {
        nn=0;
        for (i=n; i!=0; i=i/10)
        {
            r=i%10;
            f=1;
            for (j=1; j<=r; j++)
            {
                f=f*j;
            }
            nn=nn+f;
        }
if (nn==n)
{
    printf("%d is a strong Number\n", n);
}
    }

}
