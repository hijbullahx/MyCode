#include<stdio.h>
int prime();
int prime()
{
    int i,n,f=0;
    printf("Input The Number\n");
    scanf("%d", &n);
    for(i=2; i<(n-1); i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
    return f;
}

main()
{
   int p;
   p=prime();
   if(p==0)
   {
       printf("prime number");
   }
   else
   {
       printf("Not prime number");
    }
}
