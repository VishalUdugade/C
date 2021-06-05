#include<stdio.h>
int main()
{
     int i=0,j=0,row=0;

     printf("Enter the number of rows = ");
     scanf("%d",&row);


     printf("======================================================\n");

     for(i=1;i<=row;i++)
     {
       for(j=row;j>=1;j--)
       {
          if(j<=i)
          {
              printf(" *");
          }
          else
          {
              printf("  ");

          }
       }
       printf("\n");
     }
     return(0);

}

/*#include<stdio.h>
int main()
{
     int i=0,j=0,row=0,temp=0;

     printf("Enter the number of rows = ");
     scanf("%d",&row);

     temp=row+1;
     printf("======================================================\n");

     for(i=1;i<=row;i++)
     {
       for(j=1;j<=row;j++)
       {
          if(j>=temp-i)
          {
              printf(" *");
          }
          else
          {
              printf("  ");

          }
       }
       printf("\n");
     }
     return(0);

}*/

