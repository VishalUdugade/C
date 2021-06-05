#include<stdio.h>
//int power(int base,int exponent);
int main()
{
     int exponent=0,base=0,ret=0;

     printf("\n\nEnter the base = ");
     scanf("%d",&base);

     printf("\nEnter the Exponent = ");
     scanf("%d",&exponent);



     ret=power(base,exponent);

     if(ret==1)
     {
         printf("\t\n power of %d^%d is = %d\n",base,exponent,1);
     }
     else if(ret==0)
     {
         printf("\t\n power of %d^%d is = %d\n",base,exponent,0);
     }
     else
     {
         printf("\t\npower of %d^%d is = %d\n",base,exponent,ret);

     }


    return(0);
}
int power(int base,int exponent)
{
      int temp=0,power=1;
      temp=exponent;
    if(base>0 && exponent>0)
     {
             while(temp>=1)
             {
                 power *= base;
                 temp--;

             }

             return(power);
     }
     else if(base==0 || base!=0 && exponent==0)
     {
          return(1);
     }
     else if(base==0 && exponent!=0)
     {
         return(0);

    }
    else
    {
        printf("\n\nsorry\n\n");
    }
}
