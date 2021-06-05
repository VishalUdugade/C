#include<stdio.h>
int main()
{
     int result=0,num=0,dig=0,temp=0,sum=0,sup=0,ret=0;
     printf("Enter any number=");
     scanf("%d",&num);

     result=isprime(num);

     if(result==1)
     {

          temp=num;
          while(temp>0)
          {
              dig=temp%10;
              ret=isprime(dig);
              if(ret==1)
              {
                 sum=sum+dig;
              }
              else
              {
                 printf("\n\nThe number is prime but not superprime\n\n");
                  return(0);
               }
              temp=temp/10;
         }
         sup=isprime(sum);
         {
            if(sup==1)
            {
              printf("\n\nThe number is superprime number\n\n");
            }
            else
            {
              printf("\n\nThe number is prime but not  superprime number \n\n");
            }
         }
     }
     else
     {
       printf("\n\nThe number is not superprime number\n\n");
     }
     return(0);

}
int isprime(int a)
{
     int i=0;
     if(a==1||a==0)
     {
         return 1;
     }
     for(i=2;i<a;i++)
     {
          if(a%i==0)
          {
               return 0;
          }

     }

     return 1;

}











