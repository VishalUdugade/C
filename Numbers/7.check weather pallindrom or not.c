#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num=0,temp=0,i=0,rev=0;
   system("cls");
   printf("Enter the number = ");
   scanf("%d",&num);

   temp=num;

  if(num>0)
  {
       while(temp>0)
       {
          i=temp%10;
          rev=(rev*10)+i;
          temp=temp/10;
       }
       if(rev==num)
       {
           printf("\t\nThe %d is Pallindrom number\n",num);
       }
       else
       {
            printf("\t\nThe %d is not Pallindrom number\n",num);
       }
  }
  else
  {
      printf("\n\tPlease Enter Positive number\n");
  }

return(0);
}
