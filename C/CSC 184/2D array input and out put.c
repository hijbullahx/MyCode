#include<stdio.h>
main()
{
    int n, r, c, A[10][10];
    printf("How many Rows and columns do you want?\n");
    scanf("%d", &n);
    printf("Input the elements of A\n");
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("A[%d][%d]=",r,c);
            scanf("%d", &A[r][c]);
        }
    }
    printf("\nThe matrix of A are:\n");
    for(r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }


}
