#include<stdio.h>
main()
{
    char alph1, alph2, c;
    printf("Input a alphabet\n");
    scanf("%c", &c);
   alph1 = 'a', 'e', 'i', 'o', 'u';
   alph2 = 'A', 'E', 'I', 'O', 'U';

    if (c>='a' && c<='z' || c>='A' && c<='Z' )
    {
    if ( c= alph1)
    {
        printf("This is a vowel");
    }
    else if (c = alph2)
    {
        printf("This is a vowel");
    }
    else

    {
        printf("This is consonent");
    }

    }
    else
        {printf("This is not an Alphabet");}
}
