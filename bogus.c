#include <stdio.h>
int main()
{
   int dogAge1, dogAge2, sum;
   printf("\nEnter first number: ");
   scanf("%d", &dogAge1);
   printf("Enter second number: ");
   scanf("%d", &dogAge2);

   sum = dogAge1 + dogAge2;
   printf("\nSum of the entered numbers: %d\n\n\n\n", sum);
   return 0;
}