#include<stdio.h>
main()
{
    char m[200], n[200];
    int i, l=0, u=0;
    printf("Input The String:\n");
    gets(m);
    printf("The string is:\n");
    puts(m);
    for (i=0; i<=(strlen(m)); i++)
    {
        if (m[i]>= 'a' && m[i]<='z' || m[i]>= 'A' && m[i]<='Z' )
        {
            if (m[i]>='a' && m[i]<='z')
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
    printf("Now the string is:\n");
    puts(m);
    printf("There are %d Upper case\n", u);
    printf("There are %d Lower case", l);

}

