#include<stdio.h>
#include<limits.h>
int main()
{
     int no=0,i=0,min=LONG_MIN;

     printf("Enter 10 Negative number\n",no);

     for(i=1;i<=10;i++)
     {
          printf("%d)",i);
          scanf("%d",&no);

          if(no<0)
          {
             if(no>min)
             {
                 min=no;
             }

          }
          else
          {
              printf("\t\nPlease Enter Positive Number \n");

              return(0);
          }

      }
      printf("\t\n The Maximum No of inputted 10 Negative number = %d\n\n",min);

      return(0);
}
