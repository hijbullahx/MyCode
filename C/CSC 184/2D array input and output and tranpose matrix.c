#include<stdio.h>
main()
{
    int r, c,n,A[10][10];
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
    printf("\nThe Inputed elements are:\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
    printf("\nThe Inverse matrix of A is:\n");
    {
        for (r=0; r<n; r++)

        {
            for (c=0; c<n; c++)
            {
                printf("%d\t", A[c][r]);
            }
            printf("\n");
        }
    }
}
