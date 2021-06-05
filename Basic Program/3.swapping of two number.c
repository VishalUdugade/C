#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ino1,ino2,temp;
    system("cls");
    printf("=====================================\n");
    printf("\nEnter two number for swapping::\n");
    printf("\nNO1 = ");
    scanf("%d",&ino1);
    printf("\nNO2 = ");
    scanf("%d",&ino2);

    temp=ino1;
    ino1=ino2;
    ino2=temp;
    printf("======================================\n");

    printf("\nAfter swapping \n NO1 = %d\n NO2 = %d\n",ino1,ino2);
    return(0);
}
