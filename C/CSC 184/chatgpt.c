#include <stdio.h>

int main() {
   int X;
   char m;

   printf("Input student number: \n");
   scanf("%d", &X);

   m = (X >= 90) ? 'A' : (X >= 80) ? 'B' : (X >= 70) ? 'C' : (X >= 60) ? 'D' : 'F';
   printf("The grade of the student is %c\n", m);

   return 0;
}

