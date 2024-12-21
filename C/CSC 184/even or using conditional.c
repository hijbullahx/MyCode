#include<stdio.h>
void eo(int n);
void eo(int n)
{
    int x;
    (x%2==0)?(printf("Even")):(printf("Odd"));
}
int main()
{
    int n;
    scanf("%d", &n);
 eo(n);
}
