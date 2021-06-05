#include<stdio.h>
int main()
{
      int i=0,j=0,cnt=0;

       printf("Enter the count = ");
       scanf("%d",&cnt);
       printf("\n================================================================================\n\n");

       for(i=1;i<=cnt;i++)
       {
         for(j=1;j<=(cnt*2)-1;j++)
         {
             // if(i+j==cnt+1 || i+j==cnt+(i+(i-1))  || i+j > cnt+1 && i+j < cnt+(i+(i-1)) )
             if(j>= cnt-(i-1) && j <= cnt+(i-1))
              {
                printf(" %d ",i);
              }
              else
              {
                 printf("   ");
              }
         }
         printf("\n\n");

       }
       printf("\n================================================================================\n\n");
       return(0);

}
