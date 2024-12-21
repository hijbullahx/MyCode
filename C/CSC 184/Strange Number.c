#include<stdio.h>
int i,j;
void prime(int n)
{
    int f=0,p=0,r;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==0)
    {
        for(i=n;i>0;i/=10)
        {
            r=i%10;
            for(j=2;j<r;j++)
            {
                if(r%j==0)
                {
                    p++;
                }
            }
        }
        if(p==0)
        {
            printf("Strange Number");
        }
        else
        {
            printf("Not Strange Number");
        }
    }
    else
    {
        printf("Not Strange Number\n");
    }
}
main()
{
    int x;
    scanf("%d",&x);
    prime(x);
}
