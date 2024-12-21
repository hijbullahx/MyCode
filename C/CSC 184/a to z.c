#include<stdio.h>
main()
{
    char c;
     c= 'a';
    IUBAT:

        printf("%c",c);
    c++;
    if (c<= 'z')


    goto IUBAT;
}
