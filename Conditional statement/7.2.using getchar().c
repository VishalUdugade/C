#include<stdio.h>

int main()
{

  char ch=getchar();

        if(ch>='a' && ch<='z')
        {
             printf("\n%c is Lowercase\n",ch);
        }
        else if(ch>='A'&& ch<='Z')
        {
             printf("\n%c is Uppercase\n",ch);
        }
        else
        {
            printf("\n Please Enter character\n");
        }

   //(ch>='A'&&ch<='Z')? printf("%c is Uppercase",ch): printf("%c is Lowercase",ch);
   return(0);
}
