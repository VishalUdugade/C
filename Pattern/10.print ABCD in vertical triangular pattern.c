#include<stdio.h>
int main()
{
      int i=0,j=0,cnt=0;

      printf("Enter the count = ");
      scanf("%d",&cnt);
      printf("\n================================================================================\n\n");


      for(i=1;i<=cnt;i++)
      {
         char ch='A';
        for(j=1;j<=i;j++)
        {
            if(i==j<=cnt||i+j<=cnt+1)
            {
                printf("\t%c\t",ch);
            }
            else
            {
                printf("\t");
            }
            ch++;
        }
        printf("\n\n");
      }
      printf("\n================================================================================\n\n");
      return(0);
}
