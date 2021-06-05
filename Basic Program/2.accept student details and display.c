#include<stdio.h>
int main()
{
   char  c_name[20],c_city[15];
   int i_rno;
  long int mobno;

   printf("==================================================================================\n");

   printf("\nEnter the student name = ");
   scanf("%s",&c_name);

   printf("Enter the city = ");
   scanf("%s",&c_city);

   printf("Enter the roll no = ");
   scanf("%d",&i_rno);

   printf("Enter the Mobile no = ");
   scanf("%ld",&mobno);

   printf("===================================================================================\n");

   printf("\n name= %s \n city= %s \n roll no.= %3d \n Mobile no.=%ld \n",c_name,c_city,i_rno,mobno);

   return(0);
}
