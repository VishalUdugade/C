#include<stdio.h>

int main()
{
   int num=0,temp=0,i=0,max=0;

   printf("Enter the  3 digit number = ");
   scanf("%d,&num");
   temp=num;
  // if(num>=100 && num<=999 || num==temp)

      while(temp>0)
      {
         i=temp%10;
         if(i>max)
         {
           max=i;
         }
         temp=temp/10;
      }
      printf("The Maximum digit of enterd %d is = %d \n",num,max);

   return(0);

}
