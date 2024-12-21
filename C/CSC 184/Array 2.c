#include<stdio.h>
main()
{
    int n, p, A[50], B[50], s, c=0, d=0, f, m=0;

    printf("How many inpute needs for A and B?\n");
    scanf("%d",&n);
    printf("Enter the values for A:\n");
    for (p=0; p<n; p++)
    {
        printf("A[%d]=", p);
        scanf("%d", &A[p]);
    }
    printf("\nEnter the values for B\n");
    for (p=0; p<n; p++)
    {
        printf("B[%d]=", p);
        scanf("%d", &B[p]);
    }
    printf("\nThe A values are:\n");
    for (p=0; p<n; p++)
    {
        c++;
        printf("%d\t", A[p]);
    }
    printf("\nTotal %d values for A\n", c);
    printf("\nThe B values are:\n");
    for (p=0; p<n; p++)
    {
        d++;
        printf("%d\t", B[p]);

    }
    printf("\nTotal %d values for B\n", d);
    printf("\nSummation is:\n");
     for (p=0; p<n; p++)
    {

        s=A[p]+ B[p];
        printf("%d\t", s);
    }
    printf("\nWhich number do you searching for?\n");
    scanf("%d", &f);

     for (p=0; p<n; p++)
     {
         if(f==A[p])
    {
        m++;
        printf("The Number is in %d position\n", p+1);
    }
    if(f==B[p])
    {
        m++;
        printf("The Number is in %d position\n", p+1);
    }

    }
    printf("It has been here %d times", m);





}
