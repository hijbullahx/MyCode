#include<stdio.h>
int main()
{

    char Alphabet;


    printf("Enter The Alphabet:\n");

    scanf("%c", &Alphabet);

(Alphabet>='A'&&Alphabet<='Z' )|| (Alphabet>='a'&&Alphabet<='z')?((Alphabet == 'A'
 || Alphabet == 'a'
 || Alphabet == 'E'
|| Alphabet== 'e'
|| Alphabet=='I'
||Alphabet=='i'
||Alphabet=='O'
||Alphabet=='o'||Alphabet=='U'||Alphabet=='u')?

printf("This Is The Example of Vowel")
:printf("This Is The Example of Consonant")):(printf("This is not an Alphabet"));
printf("\n");

}
