#include<stdio.h>
int main()
{
     int no[10],max=0,min=0,i=0;

     printf("Enter the 10 number for maximum and minimun number:\n");


     for(i=0;i<10;i++)
     {
        scanf("%d",&no);
     }

     max=no[0];
     min=no[0];

     for(i=1;i<10;i++)
     {
         if(min>no[i])
         {
            min=no[i];

         }
         if(max<no[i])
         {
            max=no[i];
         }
     }
     printf("\t\n maximum number = %d \n minimum number = %d \n",max,min);
     return(0);
}
