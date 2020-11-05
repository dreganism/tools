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
   printf("The sizeof value for char is %lu\n", sizeof(char));
   printf("The sizeof value for short int is %lu\n", sizeof(__SHRT_MAX__));
   printf("The sizeof value for int is %lu\n", sizeof(int));
   printf("The sizeof value for long int is %lu\n", sizeof(__SIZEOF_LONG__));
   printf("The sizeof value for unsigned short int  is %lu\n", sizeof(__u_short));
   
   return 0;
}