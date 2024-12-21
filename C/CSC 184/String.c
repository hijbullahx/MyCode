#include<string.h>
#include<stdio.h>
void main()
{
    char m[200], n[200];
    int p=0, i, u=0, l=0;
    printf("Input the String:\n");
    gets(m);
    printf("The String is:\n");
    puts(m);
    printf("There are %d character" ,strlen(m));

    for (i=0; i<(strlen(m)); i++)
    {
        if ((m[i]>= 'a' && m[i]<= 'z') || (m[i]>= 'A' && m[i]<= 'Z'))
        {

            if ((m[i]>= 'a' && m[i]<= 'z'))

            {
                m[i]=m[i]-32;
                l++;
            }
            else
            {
                m[i]=m[i]+32;
                u++;
            }
          }

        }


    printf("\nTHere are %d Upper case and %d lower case\n", u,l );
    printf("Now the string is:\n");
    puts(m);
}
