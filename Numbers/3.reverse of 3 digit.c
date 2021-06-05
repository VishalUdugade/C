#include<stdio.h>
#include<stdlib.h>
int main()
{
     int num=0,temp=0,i=0,rev=0;
     system("cls");
     printf("Enter the number\n");
     scanf("%d",&num);

     temp=num;
     if(temp>=100 && temp<=999)
     {
        while(temp>0)
        {
           i=temp%10;
           rev=(rev*10)+i;
           temp=temp/10;
        }
        printf("\nThe reverse of %d is = %d\n\n",num,rev);
     }
     else
     {

         printf("\nPlease Enter 3 digit enter number\n");
     }
     return(0);

}
