#include<stdio.h>
float divi(no1,no2);
int main()
{
    int no1,no2;

    printf("Enter the two number \n");

    printf("No1= ");
    scanf("%d",&no1);

    printf("No2= ");
    scanf("%d",&no2);

    if(no1>no2)
    {
       printf("\tAddition = %d\n",add(no1,no2));
       printf("\tSubstraction = %d\n",sub(no1,no2));
       printf("\tMultiplication = %d\n",mult(no1,no2));
       printf("\tDivision = %f\n",divi(no1,no2));
    }
    else
    {
        printf("\n\nPlease Enter first number is grater than second:\n\n");
    }
  return(0);

}
 int add(a,b)
 {
    return(a+b);
 }
 int sub(a,b)
 {
     return(a-b);
 }
 int mult(a,b)
 {
     return(a*b);
 }
 float divi(a,b)
 {
     return (a/b);
 }
