#include<stdio.h>
int main()
{
     int sum=0,num=0;

     printf("Enter the number \n");

     while(1)
     {
         scanf("\t%d\n",&num);

         if(num>0)
         {
            sum += num;
         }
         else
         {
             break;
         }
     }
     printf("\t\nSum of enterd number is = %d \n",sum);

     return(0);
}
