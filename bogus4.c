/*
Name:            David Regan
Desctiption:     Mid-Term Programming Assignment 2
Date:            March 23, 2014
Mentor:          David Parker
*/
#include<stdio.h>

int main()
{
    int redctr=0, bluectr=0, brownctr=0, yellowctr=0, greenctr=0, purplectr=0, sentinal=0;  // Declare type and assign initial values

    
    while (sentinal!=9)                                       // loop with exit condition
     {        
      
      printf("\nThis program will ask you to vote on your favorite M&M candy's " // User explanation of program actions
                "color\nthen it will show the tally of votes.\n\n");             // I have begun to break long printf lines with " " for readability.
      
      printf("\n(Press 9 to stop voting)\nThe Many Colors of M&M's Candy\n\n"   // Display Menu   
             "    1. Red\n    2. Blue\n    3. Brown\n    4. Yellow\n    5. Green\n"
             "    6. Purple\n\nVote on your favorite color by pressing the number"
             " before it\nthen"" the enter key.");                                  
      
      scanf("%d", &sentinal);                                 // Scan input from keyboard
      getchar();                                                 
      
          switch(sentinal)                                    // Switch statement for color selection
          {
              case 1:
              redctr ++;
              break;
              
              case 2:
              bluectr = bluectr+1;
              break;
              
              case 3:
              brownctr = brownctr+1;
              break;
              
              case 4:
              yellowctr = yellowctr+1;
              break;
              
              case 5:
              greenctr = greenctr+1;
              break;
                            
              case 6:
              purplectr = purplectr+1;
              break;
              
              default:
              break;
          }    
     } 
     printf("\n\n\n\n    -------------------------------------");  // Print the tally results
     printf("\n    ----- The tally of all votes --------");
     printf("\n    -------------------------------------"); 
     printf("\n\n        %d Red M&M's were selected", redctr);
     printf("\n        %d Blue M&M's were selected", bluectr);
     printf("\n        %d Brown M&M's were selected", brownctr);
     printf("\n        %d Yellow M&M's were selected", yellowctr);
     printf("\n        %d Green M&M's were selected", greenctr);
     printf("\n        %d Purple M&M's were selected", purplectr);
     printf("\n\n\n        Done - Press Enter to Quit\n\n\n\n\n\n");

     getchar();   
   
     return 0;                                                    //  End  
}
