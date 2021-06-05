#include<stdio.h>
int main()
{
      int num=0,fact=0;

      printf("\nEnter the number = ");
      scanf("%d",&num);

      printf("\n=================================================================\n");

      fact = factorial(num);
      printf("\n Factorial of %d is = %d",num,fact);

      printf("\n\n=================================================================\n");
      return(0);
}
int factorial(int number)
{
      int fact=1;
      while(number>=1)
     {
          fact *= number;
           number--;
     }
     return(fact);
}
