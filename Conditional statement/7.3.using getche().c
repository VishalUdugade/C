#include<stdio.h>

int main()
{

  char ch=getche();
     if(ch>='a' && ch<='z')
     {
         printf("%c is Lowercase\n",ch);
     }
     else if(ch>='A' && ch<='Z')
     {
         printf("%c is Uppercase\n\n",ch);
     }
     else
     {
         printf("\n Please Enter a character \n\n");
     }

      // (ch>='A'&&ch<='Z')? printf("%c is Uppercase",ch): printf("%c is Lowercase",ch);
   return(0);

}
