#include<Stdio.h>
main()
{
    int n, p, A[50], h=0,s,f,l,m,i;
    char sr;
    printf("How many values do you want?\n");
    scanf("%d",&n);
    printf("Input the values\n");
    for(p=0; p<n; p++)
    {
        printf("A[%d]=", p);
        scanf("%d", &A[p]);
    }
     printf("\nInputed values are:\n");
    for(p=0; p<n; p++)
    {
        printf("%d\t",A[p]);

    }
    printf("\nPress Y to shorted the list\n");
    printf("Press N to avoid shorting\n");
    scanf(" %c", &sr);
    if (sr=='Y' || sr== 'y')
    {
        printf("Here is shorted list\n");
        for (p=0; p<n; p++)
        {
            for(i=p+1; i<n; i++)
            {
                if(A[p]>A[i])
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
    }
    else if (sr == 'N' || sr == 'n')
    {
        printf("Ok");

    }
    else
    {
        printf("Invalid Input");
    }
    printf("\nDo you want to search anything?\n");
    scanf(" %c", &sr);
    if(sr == 'Y' || sr == 'y')
    {
        printf("Which value are you finding?\n");
        scanf("%d", &s);
        f=0;
        l=n-1;
        m=(f+l)/2;
        while (f<=l)
        {
            if(s>A[m])
            {
                f=m+1;
            }
            else if(s==A[m])
            {
                printf("%d found in %d position",s , m+1);
                break;
            }
            else
            {
                l=m-1;

            }
            m=(f+l)/2;
        }
        if(f>l)
        {
            printf("Element not found");
        }

    }
    else if(sr == 'N' || sr == 'n')
    {
        printf("Ok");
    }
    else
    {
        printf("Invalid input");
    }


}
