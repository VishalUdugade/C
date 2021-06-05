#include<stdio.h>
int main()
{
     int no=0,digit=0,temp=0,even=0,odd=0;

     printf("Enter a number = ");
     scanf("%d",&no);

     printf("\n=========================================================================\n");

     temp=no;

     if(temp>0)
     {
        while(temp>0)
        {
            digit=temp%10;

              if(digit%2==0)
              {
                     if(digit==0)
                     {
                       continue;
                     }
                      even++;
              }
              else
              {
                  odd++;
              }
              temp=temp/10;
        }
           printf("\t\n even number =%d \n odd number =%d \n",even,odd);

     }
     else
     {
           printf("\t\nPlease Enter positive number\n");
     }
     printf("\n=========================================================================\n");
    return(0);
}

