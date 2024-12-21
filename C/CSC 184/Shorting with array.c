#include<stdio.h>
main()
{
    int A[20],f, p,s,l,m, n, i, h=0;
    printf("How many Input do you want?\n");
    scanf("%d", &n);
    printf("Input the values\n");
    for (p=0; p<n; p++)
    {
        printf("A[%d]", p);
        scanf("%d", &A[p]);
    }
    printf("\nInputed Values are:\n");
    for (p=0; p<n; p++)
    {
        printf("%d\t", A[p]);
    }
    printf("\nHere is the shorted list:\n");
    for (p=0; p<n;p++)
    {
        for (i=p+1; i<n; i++)
    {
        if (A[p]>A[i])
        {
            h=A[p];
            A[p]=A[i];
            A[i]=h;
        }
    }
    }

    for (p=0; p<n; p++)
    {
        printf("%d\t", A[p]);
    }
    printf("\nWhich value do you searching for?\n");
    scanf("%d", &s);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while (f<=l)
    {
        if (s> A[m])
        {
            f=m+1;
        }
        else if (s==A[m])
        {
            printf("%d is found in the position of %d", s, m+1);
            break;
        }
        else
        {
            l=m-1;
        }
        m=(f+l)/2;
        if (f>l)
        {
            printf("Elements not found");
        }

    }
}
