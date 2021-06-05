#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int num=0;
    system("cls");
    printf("Enter number = ");
    scanf("%ld",&num);

    if(num>=5)
    {
       if(num%5==0 && num%7==0)
       {
            printf("\n The number is divisible by both 5 and 7 \n");
        }
        else if(num%5==0)
        {
            printf("\n The number is only divisible by 5 \n");
        }
        else if(num%7==0)
        {
           printf("\n The Number is only divisible by 7 \n");
        }
        else
        {
            printf("\n The number is not divisible by both 5 and 7 \n ");
        }
        printf("\n=========================================================================\n");
    }
    else
    {
        printf("\n\nPlease Enter  number which is greater or equal to 5\n\n");
    }
        return(0);
}
