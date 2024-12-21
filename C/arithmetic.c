#include<stdio.h>
int main()
{
    int num1, num2, add, sub, mul, div;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("Addition: %d \n", add);
    printf("Substraction: %d \n", sub);
    printf("Multiplication: %d \n", mul);
    printf("Division: %d \n", div);

    return 0;
}
