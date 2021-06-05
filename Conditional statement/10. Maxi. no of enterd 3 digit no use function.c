#include<stdio.h>

int max(int num);
int main()
{

    int temp=0,num=0,no=0;

   printf("Enter the 3 digit number = ");
   scanf("%d",&num);
   if(num>=100 && num<=999)
   {
       temp = num;
      no = max(temp);

      printf("The Maximum digit of enterd number %d is = ",no);
    }
    else
    {
      printf("Please enter 3 digit positive number ");
    }

   return(0);
}

int max(int temp)
{
    int i=0,j=0;
    while(temp>0)
    {
        i=temp%10;
        if(i>j)
        {
           j=i;
        }
        temp=temp/10;
    }
    return(j);
}
