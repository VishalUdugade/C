#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,b=1,c=0,no=0,i=3;
    system("cls");

    printf("Enter number = ");
    scanf("%d",&no);

     if(no>0)
     {
        if(no==1)
        {
            printf(" %d ",a);
            return(0);
        }
        else if(no==2)
        {
            printf("\n\t %d %d ",a,b);
            return(0);
        }
        else
        {
            printf("\n\t %d %d ",a,b);
             while(i<=no)
             {
                 c=a+b;
                 a=b;
                 b=c;
                 printf(" %d ",c);
                 i++;
             }

        }
    }
    else
    {
        printf("\nplease Enter positive number\n");
    }

    return(0);
}
