#include<stdio.h>
main()
{
    int m;

    Marks:

    printf("Input Student Marks:\n");
    scanf("%d",&m);
 (m>=0 && m<=100 )?((m>=90)?(printf("A")):((m>=87)?(printf("B+"))
        :((m>=84)?(printf("B")):((m>=80)?(printf("B-"))
        :((m>=77)?(printf("C+")):((m>=74)?(printf("C"))
        :((m>=70)?(printf("C-")):((m>=65)?(printf("D+"))
        :((m>=60)?(printf("D")):(printf("F")))))))))))
        :(printf("Invalid Marks!"));

        printf("\n");

               goto Marks;

}
