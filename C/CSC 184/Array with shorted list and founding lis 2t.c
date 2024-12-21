#include<stdio.h>
main()
{
    int n, p, i, A[50],h=0,f,l,m, s;
    printf("How many input do you want?\n");
    scanf("%d", &n);
    printf("Input the values:\n");
    for (p=0; p<n; p++)
    {
        printf("A[%d]=", p);
        scanf("%d", &A[p]);
    }
    printf("\nHere is the Inputed values:\n");
    for (p=0; p<n; p++)
    {
        printf("%d\t", A[p]);

    }
    printf("\nHere is the Shorted list:\n");
    for (p=0; p<n; p++)
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
           printf("%d\t",A[p]);

        }
        printf ("\nWhich value are you finding for?\n");
        scanf("%d",&s);
        f=0;
        l=n-1;
        m=(f+l)/2;
        while(f<=l)
        {
            if (s>A[m])
            {
                f=m+1;
            }
            else if(s==A[m])
            {
                printf("%d is in %d position", s, m+1);
                break;
            }
            else
            {
                l=m-1;
            }
            m=(f+l)/2;

        }
        if (f>l)
        {
            printf("Invalid Number");
        }





}

