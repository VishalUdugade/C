#include<stdio.h>
int main()
{
   int i=0,j=0,num=0;

    printf("\nEnter a range of pattarn = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(num*2)-1;j++)
        {
            if(((j==num-(i-1) || j==num+(i-1))&& i<=(num/2)+1) || ((i==j || (num-i)+num==j) && i>(num/2)+1))
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;

}
