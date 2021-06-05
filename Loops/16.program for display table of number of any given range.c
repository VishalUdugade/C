#include<stdio.h>
int main()
{
    int i=0,j=0,first=0,last=0;

    printf("\n program for display table of number of range \n");

    printf("\n\nEnter the First number = ");
    scanf("%d",&first);

    printf("\n\nEnter the last number = ");
    scanf("%d",&last);

    printf("\t====================================================================\n");

    for(i=first;i<=last;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("\t %d \n",i*j);
        }
        printf(" \n ");
    }
    printf("======================================================================\n");
    return(0);


}
