#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    printf("Input the string: ");
    scanf("%[^\n]", str);
    printf("Input the substring to be searched: ");
    scanf(" %[^\n]", sub);
    if (strstr(str, sub) != NULL) {
        printf("The substring exists in the string.\n");
    } else {
        printf("The substring does not exist in the string.\n");
    }
    return 0;
}
