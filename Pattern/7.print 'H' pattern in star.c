#include<stdio.h>
int main()
{
     int i=0,j=0,col=0,row=0;

     printf("Enter the number of rows = ");
     scanf("%d",&row);

     if(row%2==0)
     {
         col=row/2;
     }
     else
     {
         col=((row/2)+0.5+1);
     }


        for(i=1;i<=row;i++)
        {
          for(j=1;j<=row;j++)
          {
             if(j==1 || j==row || i==col)
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
