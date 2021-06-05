#include<stdio.h>
int main()
{
      int no1=0,no2=0,temp1=0,temp2=0,Arr1[10]={0},Arr2[10]={0},i=0;

      printf("Enter the no1 = ");
      scanf("%d",&no1);

      printf("Enter the no2 = ");
      scanf("%d",&no2);

      printf("\n================================================================================\n\n");

      if(nolength(no1) != nolength(no2))
      {
          printf("\nThe given numbers are not Anagram \n");
          printf("\n================================================================================\n\n");
          return -1;
      }


      temp1=no1;
      temp2=no2;

       while(temp1!=0)
       {
           Arr1[temp1%10]++;
           temp1/=10;
       }
       while(temp2!=0)
       {
           Arr2[temp2%10]--;
           temp2/=10;
       }

       for(i=0;i<=10;i++)
       {
           if(Arr1[i]!= Arr2[i])
           {
               break;
           }
       }
       if(i==10)
       {
           printf("\n The given numbers are Anagram\n");
       }
       else
       {
           printf("\n the given numbers are not anagram number\n");
       }
       printf("\n================================================================================\n\n");

       return(0);
}
int nolength(int num)
{
     int len=0;
     while(num!=0)
     {
        num/=10;
        len++;
     }
     return len;
}
