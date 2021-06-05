#include<stdio.h>
int main()
{
     char ch;
     printf("Enter any Character from following \n=============================\n \n'A','B','C','D' \n\n=================\n\n 'a','b','c','d' \n\n=============================\n");
     printf("Enter Here = ");
     scanf("%c",&ch);

     switch(ch)
     {
           case 'A': case 'a':
               printf("\nWelcome\n");
           break;

           case 'B': case 'b':
               printf("\nGood day\n");
           break;

           case 'C' : case 'c':
               printf("\nHave a nice day\n");
            break;

           case 'D': case 'd':
               printf("\nGood Day\n");
            break;

           default:
              printf("\nyou Entered Wrong character\n");
              break;

     }
     return(0);
}
