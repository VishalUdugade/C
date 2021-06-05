#include<stdio.h>
int main()
{
     int num=0,i=0,mult=0;

     printf("Enter the number = ");
     scanf("%d",&num);
     printf("##############################################\n");

     if(num>0)
     {
        for(i=1;i<=10;i++)
        {
           printf("\t\n %d * %d = %d\n",num,i,num*i);
        }
     }
     else
     {
         printf("\t\nPlease Enter Positive number \n");
     }

     printf("##############################################\n");
     return(0);
}
