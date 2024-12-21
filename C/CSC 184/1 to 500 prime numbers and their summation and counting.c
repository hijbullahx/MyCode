#include<stdio.h>
main()
{
    int f=0,c=0, n, i;
    for (n=0; n<=500; n++)
    {
      for (i=2; i<=(n-1); i++)
    {
        f=0;

        if(n%i==0)
        {
            f++;
            break;
        }

    }
    if (n!=0 && f==0)
    {

        printf ("%d \t", n);
        c++;
    }
    }

    printf("\n");
    printf("Total \n");
    printf("%d", c);

}
