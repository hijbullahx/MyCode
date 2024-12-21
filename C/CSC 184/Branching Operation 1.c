#include<stdio.h>
main()
{

    int a, b, c, m;
    Marks:

    printf("Input Student Marks in Bangla\n");
    scanf("%d", &a);
    printf("Input Student Marks in English\n");
    scanf("%d", &b);
    printf("Input Student Marks in Math\n");
    scanf("%d", &c);
    m= a + b + c;

if (m >= 0 && m <=100)
{
  if (m >= 80)
    {
        printf("The Student grade is A+");
    }
    else
    {
       if (m >= 70)
       {
           printf("The Student grade is A");
       }
       else
       {
           if (m >=60)
           {
               printf("The Student grade is A-");
           }
           else
           {
               if (m >=50)
               {
                   printf("The Student grade is B");
               }
               else
               {
                  if (m >=40)
                  {
                      printf("The Student grade is C");
                  }
                  else
                  {
                      if (m >=33)
                      {
                          printf("The Student grade is D");
                      }
                      else
                      {
                          printf("The Student is not passed");
                      }
                  }
               }
           }
       }
    }
}
    else
    {
        printf("Invalid Number");
    }
    goto Marks;
}
