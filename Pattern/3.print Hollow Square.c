#include<stdio.h>
int main()
{
      int i=0,j=0,no=0;

      printf("\t\n Program for display a Hollow Square \n");
      printf("\t\n  Enter NO of rows = ");
      scanf("%d",&no);
      printf("===========================================================\n");

      for(i=1;i<=no;i++)
      {
        for(j=1;j<=no;j++)
        {
              if(i==1 || i==no || j==1 || j==no)
              {
                 printf(" * ");
              }
              else
              {
                 printf("   ");
              }
        }
        printf("\n");

      }
      return(0);

}
