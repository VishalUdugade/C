#include<stdio.h>
int main()
{
     int num=0,max=0,min=0,i=0;

      printf("Enter a 10 number to find maximum and  minimum number \n");
      scanf("%d",&num);

      max=num;
      min=num;

      for(i=1;i<10;i++)
      {
          scanf("%d",&num);

          if(max<num)
          {
             max=num;
          }
          if(min>num)
          {
             min=num;
          }
      }
      printf("\t\n Maximum number = %d \n Minimum Number = %d \n",max,min);

      return(0);

}
