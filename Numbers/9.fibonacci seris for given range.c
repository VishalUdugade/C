#include<stdio.h>
#include<stdlib.h>
int main()
{
    int first=0,last=0,i=0,a=0,b=1;
    system("cls");

    printf("Enter range of fibonacci seris\n");

    printf("first no = ");
    scanf("%d",&first);

    printf("Last no = ");
    scanf("%d",&last);

    if(first>0 && last>0 && first<last)
    {
       if(first==1 && last==2)
       {
           printf("\n\t%d %d ",a,b);
       }
       else
       {
           printf("\n\t%d %d ",a,b);

           for(i=first;i<=last-2;i++)
           {
               b=a+b;
               a=b-a;
               printf(" %d ",b);
           }
       }
    }
    else
    {
       printf("\n please enter positive number and last number is greater than first\n");
    }
    return(0);
}
