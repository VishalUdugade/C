#include<stdio.h>
int main()
{
     int i=0,j=0,row=0;

     printf("Enter the number of rows = ");
     scanf("%d",&row);

     for(i=1;i<=row;i++)
     {
       for(j=1;j<=row;j++)
       {
          if(i<=j)
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
