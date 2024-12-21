#include<stdio.h>
main()
{
    int m;
    printf("Input Student Marks\n");
    scanf("%d", &m);

    switch (m>=0 && m<=100)
   {
       case 1:
       switch (m/10)
       {
       case 10:
       case 9:
        printf("The grade is A");
        break;
       case 8:
        switch (m%10)
        {
        case 7:
        case 8:
        case 9:
            printf("The Grade is B+");
            break;
        case 6:
        case 5:
        case 4:
            printf("The grade is B");
            break;
        default:
            printf("The Grade is B-");
        }
        break;
        case 7:
            switch (m%10)
            {
            case 7:
            case 8:
            case 9:
                printf("The Grade is C+");
                break;
            case 4:
            case 5:
            case 6:
                printf("The Grade is C");
                break;
            default:
                printf("The Grade is C-");
            }
            break;
            case 6:
                switch (m%10)
                {
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    printf("The Greade is D+");
                    break;
                default:
                    printf("The Grade is D");

                }
                break;
                default:
                    printf("The Grade is F");

       }
       break;
   default:
    printf("Invalid Number");
    break;
   }

}
