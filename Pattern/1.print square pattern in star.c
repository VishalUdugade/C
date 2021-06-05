#include<stdio.h>
int main()
{
      int i=0,j=0,row=0;

      printf("\n Enter the row = ");
      scanf("%d",&row);

      printf("\n============================square========================================\n\n");

      for(i=0;i<=row;i++)
      {
          for(j=0;j<=row;j++)
          {
              printf(" * ");
          }
          printf("\n\n");
      }
      return(0);
}
