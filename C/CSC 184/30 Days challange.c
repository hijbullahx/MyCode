#include <stdio.h>
#include <string.h>

int main() {
    char input_string[105];
    fgets(input_string, 105, stdin);


    printf("Hello, World.\n");
    printf("%s", input_string);

    return 0;
}
