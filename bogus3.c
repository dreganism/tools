/*
Name:            David Regan
Desctiption:     Mid-Term Programming Assignment 1
Date:            March 23, 2014
Mentor:          David Parker
*/
#include<stdio.h>

int main()
{
    int num=0, total=0, count;                   // Declarations and assignments
    float average;                              
    
    printf("\nThis program will ask you to enter 6 integers\nand will"
           " calculate and display the total & average\nof those integers.\n\n\n\n");
        
    for (count=1; count<=6;count++)             // for loop definition with start val, condition and counter increment
    {
         printf("\nSelect an integer, then press enter: ");  // User instruction
         scanf("%d", &num);                                  // Scan keyboard for input
         getchar();
            
         
         total+=num;                                         // Total computed
         average= (float)total/(float)count;                 // Averge computed - explicit type cast
     }
           
     printf("\n\n\nThe Average(Rounded)      The Total");             // Print report headers
     printf("\n--------------------      ---------");
     printf("\n   %5.2f                      %d\n\n\n\nDone - Press Enter To Quit", average, total); // Show values of average and total         
     getchar();
     
     return 0;                                               // End    
}

