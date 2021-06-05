#include<stdio.h>
int main()
{
        int num=0;

        printf("\t\nEnter the number to check it is even or odd = ");
        scanf("%d",&num);

        printf("=================================================================\n\n");

        num>0 ? (num%2==0 ? printf("The %d is even number \n\n",num): printf("The %d is odd number \n\n",num)): printf("Please Enter positive number\n\n");

        printf("=================================================================\n\n");
        return(0);

}
