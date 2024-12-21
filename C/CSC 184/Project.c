#include <stdio.h>

void prime(int num);
void palindrome(int n);
void armstrong(int n);
int count(int n);
void strong(int n);
void adam(int n);
int reverse(int n);
void sunny(int n);
void duck(int n);
void automorphic();
void strange(int n);


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
void palindrome(int n)
{
    int i, rn=0, r;
    for (i=n; i!=0; i=i/10)
    {
        r=i%10;
        rn=(rn*10)+r;

    }
    if (rn==n)
    {
        printf("%d is a Palindrome Number", n);
    }
    else
    {
        printf("%d is Not a Palindrome Number", n);
    }
}
int count(int n)
{
    int i, d=0;
    for(i=n; i!=0; i/=10)
    {
        d++;
    }
    return d;
}
void armstrong(int n)
{
    int i,c, r=0;
    double nn=0;
    c=count(n);
    for (i=n; i!=0; i/=10)
    {
        r=i%10;
        nn+=pow(r,c);
    }
    if(nn==n)
    {
        printf("%d is a Armstrong Number",n);

    }
    else
    {
        printf("%d is not a Armstrong Number", n);
    }
}
void strong(int n)
{
    int i,j,r, f, nn=0;
    for (i=n; i!=0; i/=10)
    {
        r=i%10;
        f=1;

    for(j=1; j<=r; j++)
    {
        f=f*j;
    }
    nn=nn+f;
}
if (nn==n)
{
    printf("%d is a Strong Number",n);
}
else
{
    printf("%d is not a Strong Number",n);
}
}
int reverse(int n)
{
    int i, d, rn=0;
    for(i=n; i!=0; i/=10)
    {
        d=i%10;
        rn=rn*10+d;
    }
    return rn;
}

void adam(int n)
{
    int r, sq, rsq, rrsq;
    sq = n * n;
    r = reverse(n);
    rsq = reverse(sq);
    rrsq = r * r;
    if(rsq == r*r)
    {
        printf("%d is an Adam Number", n);
    }
    else
    {
        printf("%d is not an Adam number", n);
    }
}
void sunny(int n)
{
    int y,sqr;
    y=sqrt(n+1);
    sqr=y*y;
    if(sqr-1 == n)
    {
        printf("%d is a Sunny Number",n);
    }
    else
    {
        printf("%d is not a Sunny Number",n);
    }

}
void duck(int n)
{
    int i, c=0, r;
    for(i=n; i!=0; i/=10)
    {
        r=i%10;
        if(r==0)
        {
            c++;
            break;
        }

    }
    if (c==1)
    {
        printf("%d is a Duck Number",n);
    }
    else
    {
        printf ("%d is not a Duck Number",n);
    }
}
void automorphic(int n)
{
    int ld, sqr;
    sqr=n*n;
    ld=sqr%10;
if (ld==n)
       {
        printf("%d is an Automorphic Number:",n);
    }
    else
    {
        printf("%d is not an Automorphic Number:",n);
    }
    }
void strange(int n)
{
   int i, j, f=0, p=0, r;
   for (i=2; i<(n/2); i++)
   {
       if (n%i==0)
       {
           f++;
       }
   }
   if(f==0)
   {
       for (i=n; i>0; i/=10)
       {
           r=i%10;
       }
       for (j=2; j<r; j++)
       {
           if (r%j==0)
           {
               p++;
           }
       }

   if (p==0)
   {
       printf("%d is a Strange Number", n);
   }
   else
   {
       printf("%d is not a Strange Number", n);
   }
   }
   else
    printf("%d is not a Strange Number", n);

}




int main()
{
    int option, n;
    printf("\t\tWelcome to the Number Checker program!\n\n");
    printf("Select an option to check the type of number:\n\n");
    printf("1. Prime Number\n\n");
    printf("2. Palindrome Number\n\n");
    printf("3. Armstrong Number\n\n");
    printf("4. Strong Number\n\n");
    printf("5. Adam Number\n\n");
    printf("6. Sunny Number\n\n");
    printf("7. Duck Number\n\n");
    printf("8. Automorphic Number\n\n");
    printf("9. Strange Number\n\n");
    scanf("%d", &option);
    printf("You have chosen Option: 0%d\n", option);
    switch (option)
    {
        case 1:
            printf("Enter a number to check if it is prime number or not: \n");
            scanf("%d", &n);
            prime(n);
            break;
        case 2:
            printf("Enter a number to check if it is Palindrome Number or not: \n");
            scanf("%d", &n);
            palindrome(n);
            break;
        case 3:
            printf("Enter a number to check if it is Armstrong Number or not: \n");
            scanf("%d", &n);
            armstrong(n);
            break;
        case 4:
            printf("Enter a number to check if it is Strong Number or not: \n");
            scanf("%d", &n);
            strong(n);
            break;
        case 5:
            printf("Enter a number to check if it is Adam Number or not: \n");
            scanf("%d", &n);
            adam(n);
            break;
        case 6:
            printf("Enter a number to check if it is Sunny Number or not: \n");
            scanf("%d", &n);
            sunny(n);
            break;
        case 7:
            printf("Enter a number to check if it is Duck Number or not: \n");
            scanf("%d", &n);
            duck(n);
            break;
        case 8:
            printf("Enter a number to check if it is Automorphic Number or not: \n");
            scanf("%d", &n);
            automorphic(n);
            break;
        case 9:
            printf("Enter a number to check if it is Strange Number or not: \n");
            scanf("%d", &n);
            strange(n);
            break;



        default:
            printf("Invalid option selected.\n");



    }

}
