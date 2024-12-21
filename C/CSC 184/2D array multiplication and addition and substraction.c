#include<stdio.h>

main()
{
    int r,a,c,n,A[10][10], B[10][10], AB[10][10], s=0, k;
    printf("How many Rows and columns do you want?\n");
    scanf("%d",&n);
    printf("Input the values for A\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("A[%d][%d]=", r, c);
            scanf("%d", &A[r][c]);
        }
    }
    printf("\nInput the values for B\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("B[%d][%d]=", r, c);
            scanf("%d", &B[r][c]);
        }
    }
    printf("\nThe Inputed elements of A are:\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
    printf("\nThe Inputed elements of B are:\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t", B[r][c]);
        }
        printf("\n");

    }
    printf("\nAddition of A and B (A+B)\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            a= A[r][c] + B[r][c];
            printf("%d\t",a);
        }
        printf("\n");
    }
     printf("\nSubstraction of A and B (A-B)\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            a= A[r][c] - B[r][c];
            printf("%d\t",a);
        }
        printf("\n");
    }
     printf("\nMultiplication of A and B (AB)\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            for (k=0; k<n; k++)
            {
                s=s+A[r][k]*B[k][c];
            }
            AB[r][c]=s;
            s=0;
        }
    }

    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t", AB[r][c]);
        }
        printf("\n");

}
}
