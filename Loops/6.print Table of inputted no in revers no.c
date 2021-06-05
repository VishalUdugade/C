#include<stdio.h>
int main()
{
     int num=0,i=10;

     printf("Enter the number = ");
     scanf("%d",&num);
     printf("##############################################\n");

     if(num>0)
     {
        while(i>=1)
        {
           printf("\t\n %d * %d = %d\n",i,num,i*num);
           i--;
        }
     }
     else
     {
         printf("\t\nPlease Enter Positive number \n");
     }

     printf("##############################################\n");
     return(0);
}
