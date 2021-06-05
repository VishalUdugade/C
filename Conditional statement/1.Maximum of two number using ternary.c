#include<stdio.h>
int main()
{
       int no1=0,no2=0;

       printf("\nEnter the number no1:= ");
       scanf("%d",&no1);

       printf("\nEnter the number no2:= ");
       scanf("%d",&no2);

       printf("\n======================================ternary===============================\n\n");

       (no1>no2)?printf("\nThe number %d is maximum\n",no1): printf("\nThe number %d is maximum\n",no2);

       return(0);


}
