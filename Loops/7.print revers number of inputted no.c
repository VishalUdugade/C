#include<stdio.h>
int main()
{
     int inum=0,irev=0,itemp=0,a=0;

     printf("\n\tEnter the number = ");
     scanf("%d",&inum);

     printf("\n=========================================================================\n");
     itemp=inum;

     if(inum>0)
     {
        while(itemp>0)
        {
            a=itemp%10;
            irev=(irev*10)+a;
            itemp=itemp/10;
        }
         printf("\t\n Reverse number of %d is = %d\n\n",inum,irev);
     }
     else
     {
         printf("\t\nPlease Enter Postivie number\n");
     }
     printf("\n=========================================================================\n");
     return(0);
}
