#include<stdio.h>

int main()
{
   // char ch;
   // scanf("%c",&ch);
    char ch=getch();


       if( ch>='A' && ch<='Z')
       {
           printf("\n%c is Uppercase\n",ch);
       }
       else if(ch>='a' && ch<='z')
       {
           printf("\n%c is Lowercase\n\n",ch);
       }
       else
       {
           printf(" \nPlease Enter a character\n");
       }


   // (ch>='A'&& ch<='Z')? printf("%c is Uppercase",ch): printf("%c is Lowercase",ch);
    return(0);
}
