#include<stdio.h>
int main()
{
      int num=0,temp=0,i=2;

      printf("\t\nEnter the number for check it is prime or not = ");
      scanf("%d",&num);

      printf("==========================================================================\n\n");

      temp=num;

      temp>0 ? while(i<=(temp/2)) ? (temp%i==0 ? printf("\t\nThe %d is not prime number\n\n ",num)return(0):i++) : printf("\t\nThe %d is prime number\n\n ",num)) :printf("\t\nPlease Enter positive number \n\n");

      printf("==========================================================================\n\n");
      return(0);
}
