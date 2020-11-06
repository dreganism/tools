#include<stdio.h>
int main()
{
    void change (float, int *, int *, int *, int *);  /* Function Prototype */
    float inputVal;
    int quarters, dimes, nickels, pennies, count;
    
        for(count=1; count<=3; count++)  /*Set the counter for loop to 1 */
        {
            switch(count)                /*Use switch structure to ID action*/
            {
                case 3:
                printf("\nEnter Total Value of Your Change:\n\n"); 
                scanf("%f", &inputVal);
                fflush(stdin); 
                break;
              
                case 1:
                inputVal=1.88;
                break;
              
                case 2:
                inputVal=.32;      
                break;
            }
               
          change(inputVal, &quarters, &dimes, &nickels, &pennies); /* F Call */                                             /* Function Call */
     
          printf("\nTOTAL VALUE ENTERED:  %.2f\n", inputVal);
          printf("\n%d quarters", quarters);
          printf("\n%d dimes", dimes);      
          printf("\n%d nickels", nickels);
          printf("\n%d pennies", pennies);
          fflush(stdin);
          getchar();
          }  
            
            
          return 0;
}
/* Function 'change' begins next line- function header identifies inputVal as float and
the remaining int's as pointers */
void change(float inputVal, int *pquarters,int *pdimes, int *pnickels, int *ppennies)  
{
    *pquarters = (int)(inputVal/.25);   // See note 1
    *pdimes    = (int)((inputVal-*pquarters*.25)/.1);
    *pnickels  = (int)((inputVal-*pquarters*.25-*pdimes*.1)/.05);
    *ppennies  = (long)((inputVal-*pquarters*.25-*pdimes*.1-*pnickels*.05)/.01+0.5);//See note 2
}  
/* 
1. inputVal is a float; dividing inputVal by real constant (.25) yields a float, 
which is cast to an int, which drops the remainder giving the count of quarters.
I used this approach in each of the subsequent computations.

2. I tired to simply divide (inputVal-*pquarters*.25-*pdimes*.1-*pnickels*.05)
by .01, but it gave the wrong answer even though mathematically it should be 
correct. Relying on casting to produces unexpected results requiring workaround
*/