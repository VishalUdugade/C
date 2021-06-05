#include<stdio.h>
int main()
{
       int no=1;

       printf("Program for print 'Welcome' message in 10 time \n");
       printf("===============================================\n");

       while(no<=10)
       {
          printf("\t %2d) Welcome \n",no);
          no++;
       }

       printf("==============================================\n");
       return(0);

}
