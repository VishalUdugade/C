#include<stdio.h>
int main()
{
     int i=0,j=0,row=0,k=2;

     printf("Enter the number of rows = ");
     scanf("%d",&row);

     for(i=1;i<=row;i++)
     {
       for(j=1;j<=row;j++)
       {
          if(i<=j)
          {
             printf("%d\t",k);
             k=k+2;
          }
          else
          {
             printf("\t");
          }
       }
       printf("\n");
     }
     return(0);
}
