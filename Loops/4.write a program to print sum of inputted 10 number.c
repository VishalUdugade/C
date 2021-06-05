#include<stdio.h>
int main()
{
     int i=0,sum=0,no=0;

     printf("Enter 10 number for print there sum\n");

     for(i=0;i<10;i++)
     {
        printf("No[%d]=",i+1);
       scanf("%d",&no);
       sum=sum+no;
     }


   /* for(i=0;i<10;i++)
     {
         sum=sum+no[i];
     }*/

     printf("\t sum of enterd 10 number is = %d",sum);
     return(0);
}
