#include<stdio.h>
int main()
{
    char Alphabet;
    printf("Enter The Alphabet:\n");
    scanf(" %c", &Alphabet);
    (Alphabet == 'A' || Alphabet == 'a'
     || Alphabet == 'E' || Alphabet == 'e'
     || Alphabet == 'I' || Alphabet == 'i'
     || Alphabet == 'O' || Alphabet == 'o' ||
      Alphabet == 'U' || Alphabet == 'u') ?
       printf("This is an example of a vowel.\n")
       : printf("This is an example of a consonant.\n");
    return 0;
}
