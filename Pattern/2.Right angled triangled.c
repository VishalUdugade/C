#include<stdio.h>
int main()
{
    int i=0,j=0,row=0;
     char ch='A';

    printf("\t\n Enter the number of row = ");
    scanf("%d",&row);

    printf("=========================================================\n");

    for(i=1;i<=row;i++)
    {
       for(j=1;j<=i;j++)
       {
               printf("\t*");

       }
       printf("\n");
    }
    return(0);
}
