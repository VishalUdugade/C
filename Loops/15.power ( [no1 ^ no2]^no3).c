#include<stdio.h>
int main()
{
      int i=0,base=0,*iptr=NULL,totexponent=0,power=1,exponentmulti=1;

      printf("\n\nEnter a base Number: = ");
      scanf("%d",&base);

      printf("\n\nEnter number of total exponent: = ");
      scanf("%d",&totexponent);

      iptr=(int*)malloc(totexponent*sizeof(int));

      for(i=0;i<totexponent;i++)
      {
             printf("\n\nexponent NO(%d) = ",i+1);
             scanf("%d",&iptr[i]);

             exponentmulti *= iptr[i];
      }

      for(i=exponentmulti;i>=1;i--)
      {
          power *= base;
      }

      printf("\n\n The Power of (%d)^",base);

     for(i=0;i<totexponent-1;i++)
     {

         printf("%d^",iptr[i]);
     }

      printf("%d = %d \n\n",iptr[totexponent-1],power);
      return(0);


}
