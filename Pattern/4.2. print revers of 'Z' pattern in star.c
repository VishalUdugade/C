#include<stdio.h>
int main()
{
       int i=0,j=0,row=0;

       printf("Enter the number = ");
       scanf("%d",&row);
       printf("\n|||||||||||||||||||||||||||||||||||| reverse of Z |||||||||||||||||||||||||||||||||||||||\n\n");

       for(i=1;i<=row;i++)
       {
          for(j=1;j<=row;j++)
            {
                if(i==1||i==row|| i==j)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
       }
       printf("\n|||||||||||||||||||||||||||||||||||| reverse of Z |||||||||||||||||||||||||||||||||||||||\n\n");
       return(0);
}


