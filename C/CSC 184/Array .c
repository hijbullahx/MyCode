#include<stdio.h>
main()
{
    int n, p,i,j,h=0, A[50];
    scanf("%d",&n);
    for (p=0; p<n; p++)
    {
        printf("A[%d]=", p);
        scanf("%d", &A[p]);
    }
    for (p=0; p<n; p++)
    {
        printf("%d\t", A[p]);

    }
      printf("\n");
    for (p=0; p<n; p++)
    {
        for (i=p+1; i<n; i++)
        {
          if (A[p]> A[i])
          {
              h=A[p];
              A[p]=A[i];
              A[i]=h;
          }
        }

        printf("%d\t", A[p]);
    }

}
