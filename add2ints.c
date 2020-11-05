#include <stdio.h>
int main()
{
   int num1, num2, sum;
   printf("\nEnter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   printf("\nSum of the entered numbers: %d\n\n\n\n", sum);
   return 0;
}