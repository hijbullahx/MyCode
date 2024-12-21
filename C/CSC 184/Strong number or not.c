#include<stdio.h>
main()
{
    int n, i, r,f, j, nn=0;
    printf("Inter the digit\n");
    scanf("%d",&n);
    for (i=n; i!=0; i=i/10)
    {
        r=i%10;
        f=1;
        for(j=1; j<=r; j++)
        {
            f=f*j;
        }
        nn=nn+f;
    }
    printf("New Number is:%d\n",nn);
    (nn==n)?(printf("Strong Number")):(printf("Not Strong Number"));
}
