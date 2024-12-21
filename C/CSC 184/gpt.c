#include <stdio.h>

void prime(int num);

void prime(int num)
{
    int i, f=0;

    for (i=2; i<num/2; i++)
    {
       if (num%i==0)
       {
           f=1;
           break;
       }
    }
    if(f==0)
    {
         printf("%d is a prime number.\n", num);
    }
    else
    {
         printf("%d is not a prime number.\n", num);
    }
}

int main()
{
    int option, n;
    printf("Welcome to the Number Checker program!\n");
    printf("Select an option to check the type of number:\n");
    printf("1. Prime Number\n");
    /*printf("2. Palindrome Number\n");
    printf("3. Armstrong Number\n");
    printf("4. Strong Number\n");
    printf("5. Adam Number\n");
    printf("6. Sunny Number\n");
    printf("7. Duck Number\n");
    printf("8. Automorphic Number\n");
    printf("9. Strange Number\n");*/
    scanf("%d", &option);
    switch (option)
    {
        case 1:
            printf("Enter a number to check if it is prime: ");
            scanf("%d", &n);
            prime(n);
            break;
        default:
            printf("Invalid option selected.\n");
            break;
    }

}
