#include<stdio.h>
int main()
{
   int no1=0,no2=0,ret=0;

   printf("\n Enter two numbers from users \n ");

   printf("\nNo1 = ");
   scanf("%d",&no1);

   printf("\nNo2 = ");
   scanf("%d",&no2);

   printf("\n=================================================================\n");

   if(no1>0 && no2>0 && no1>1 && no2>1)
   {
       ret=prime(no1);

       if(ret==1)
       {
            printf("\nThe factors of %d is = ",no1);
            factor(no1);
       }
       else
       {
           printf("\nPlease Enter  No1 which is not prime");
       }

       printf("\n");


       ret=prime(no2);

       if(ret==1)
       {
            printf("\nThe factors of %d is = ",no2);
            factor(no2);
       }
       else
       {
            printf("\nPlease Enter  No2 which is not prime");
       }

        printf("\n");
   }
   else
   {
        printf("\nPlease Enter both Number which is greater than 0  and 1\n");
   }
   printf("\n=================================================================\n");
   return(0);


}
int prime(int num)
{
    int i=2;
    while(i<num/2)
    {
        if(num%i==0)
        {
            return(1);
        }
       i++;
    }
    return(2);
}
void factor(int number)
{
     int i=2;

     while(number/i!=1 || number%i!=0)
     {
          if(number%i==0)
          {
               printf(" %d * ",i);
               number=number/i;
          }
          else
          {
            i++;
          }
     }
     printf("%d",i);

}
