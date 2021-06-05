#include<stdio.h>
int main()
{
      int i=0,j=0,cnt=0;


      printf("Enter the count = ");
      scanf("%d",&cnt);
      printf("\n================================================================================\n\n");

      for(i=0;i<=cnt;i++)
      {
           char ch='A';
         for(j=0;j<=i;j++)
         {
             printf("%c\t",ch);
             ch++;

         }
         printf("\n\n");
      }
     printf("\n================================================================================\n\n");

      return(0);
}
