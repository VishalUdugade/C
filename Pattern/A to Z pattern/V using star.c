#include<stdio.h>
int main()
{
       int num,i,j;

       printf("\nEnter a range = ");
       scanf("%d",&num);

       for(i=1;i<=num;i++)
       {
          for(j=1;j<=(num*2)-1;j++)
          {
              if(i==j || (num-i)+num==j)
              {
                 printf(" * ");
              }
              else
              {
                 printf("  ");
              }
          }
          printf("\n");
       }
       return(0);
}
