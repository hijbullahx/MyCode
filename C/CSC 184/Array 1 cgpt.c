#include<stdio.h>

int main()
{
    int n, p, A[50], h=0, i;
    char sr;

    printf("How many numbers do you want?\n");
    scanf("%d", &n);

    printf("Input the values\n");
    for (p=0; p<n; p++)
    {
        printf("A[%d]=", p);
        scanf("%d", &A[p]);
    }

    printf("\nThe inputted values are:\n");
    for (p=0; p<n; p++)
    {
        printf("%d\t", A[p]);
    }

    printf("\nDo you want to sort the list?\n If you want press Y\n Otherwise press N\n");
    scanf(" %c", &sr); // add a space before %c to consume whitespace

    if (sr == 'Y' || sr == 'y')
    {
        printf("Here are the sorted numbers:\n");
        for (p=0; p<n; p++)
        {
            for (i=p+1; i<n; i++)
            {
                if (A[i] < A[p])
                {
                    h = A[p];
                    A[p] = A[i];
                    A[i] = h;
                }
            }
            printf("%d\t", A[p]);
        }
    }
    else if (sr == 'N' || sr == 'n')
    {
        printf("Ok fine");
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
