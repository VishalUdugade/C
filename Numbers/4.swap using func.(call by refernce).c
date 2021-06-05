#include<stdio.h>

void swap(int *no1,int *no2);
int main()
{
    int no1,no2;

    printf("Enter two number for swapping\n");

    printf("\nNo1= ");
    scanf("%d",&no1);

    printf("\nNo2= ");
    scanf("%d",&no2);

    printf("\nBeford swapping of number \n no1=%d \n no2=%d \n",no1,no2);
    printf("\n=============================================================\n");

    swap(&no1,&no2);

    printf("\nBefore swapping of number \n no1=%d \n no2=%d \n",no1,no2);
     return(0);
}
void swap(int *no1,int *no2)
{
    int temp=0;

    temp=*no1;

    *no1=*no2;

    *no2=temp;


    // return(*no1,*no2);
}
