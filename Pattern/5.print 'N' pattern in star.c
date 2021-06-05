#include<stdio.h>
int main()
{
       int i=0,j=0,row=0;

       printf("Enter the number row = ");
       scanf("%d",&row);
       printf("\n=============================================== N =======================================\n\n");

       for(i=1;i<=row;i++)
       {
          for(j=1;j<=row;j++)
          {
              if(j==1||j==row||i==j)
              {
                  printf("*\t");
              }
              else
              {
                  printf("\t");
              }

          }
          printf("\n\n");
       }

        printf("\n=============================================== N =======================================\n\n");
       return(0);
}
