#include <stdio.h>

int main() {
    int num, i = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        goto end;
    }

    else if (i < num) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            goto end;
        }
        i++;
    }

    printf("%d is a prime number.\n", num);

    end:
        return 0;
}

