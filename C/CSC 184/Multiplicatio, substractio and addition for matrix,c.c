#include<stdio.h>
main()
{
    int n, r, c, a, A[50][50], B[50][50], s=0,k,AB[50][50];
    scanf("%d", &n);
    printf("Input values for A\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf ("A[%d][%d]=",r,c);
            scanf ("%d", &A[r][c]);
        }
    }
    printf("Input values for B\n");
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            printf("B[%d][%d]=", r,c);
            scanf("%d", &B[r][c]);
        }
    }
    printf("\nValues for A\n");
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
        printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
     printf("\nValues for B\n");
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
        printf("%d\t", B[r][c]);
        }
        printf("\n");
    }
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
        printf("%d\t", B[r][c]);
        }
        printf("\n");
    }
    printf("\nMultiplication of AB is:\n");
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            for (k=0; k<n; k++)
            {
                s=s+A[r][k]*B[k][c];
            }
            AB[r][c]=s;
            s=0;
        }
    }
        for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
        printf("%d\t", AB[r][c]);
        }
        printf("\n");
    }
    printf("\nAdition\n");

    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            a= A[r][c]+B[r][c];

            printf("%d\t", a);
        }
        printf("\n");
    }



}


