#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no=0,temp=0,sum=0,i=0;
    system("cls");
    printf("Enter  a 3 digit number\n");
    scanf("%d",&no);
    temp=no;

    if(temp>=100 && temp<=999)
    {
       while(temp>0)
       {
             i=temp%10;
             sum=sum+i;
             temp=temp/10;
        }
        printf("\nThe sum of digits of %d is = %d\n",no,sum);

    }
    else
    {
        printf("\n\nPlease Enter Positive number and it contains exact 3 digits\n");
    }



    return(0);
}
