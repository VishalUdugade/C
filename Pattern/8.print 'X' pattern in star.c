#include<stdio.h>
int main()
{
      int i=0,j=0,row=0,col=0;

      printf("Enter a row number = ");
      scanf("%d",&row);

      col=row;

      for(i=1;i<=row;i++)
      {
         for(j=1;j<=row;j++)
         {
             if(i==j || j==col)
             {
                 printf(" * ");
             }
             else
             {
                 printf("   ");
             }
         }
         col--;
         printf("\n");
      }
      return(0);
}
