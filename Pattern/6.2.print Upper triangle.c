#include<stdio.h>
int main()
{
    int i=0,j=0,row=0,col=0;

    printf("Enter the number of rows = ");
    scanf("%d",&row);

    if(row>0)
    {
       col=row;

       for(i=1;i<=row;i++)
       {
         for(j=1;j<=col;j++)
         {
           printf(" * ");
         }
         col--;
         printf("\n");
       }

    }
    else
    {

        printf("\t\n Please Enter Positive number\n\n ");
    }
    return(0);
}
