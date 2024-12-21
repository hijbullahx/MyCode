#include<stdio.h>
main()
{
    int n, i, E[4];
    printf("How many elements are there?\n");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("The elements are:\n");
        scanf("E[i]=",&i);
    }
}
