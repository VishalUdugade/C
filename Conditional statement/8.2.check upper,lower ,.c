#include<stdio.h>

int main()
{
    int ch;

    printf("Enter the chratcter , digit or symbol = ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("\n %c is Uppercase character \n\n",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\n %c is Lowercase character \n\n ",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\n %c is digit  \n\n",ch);
    }
    else
    {
        printf("\n %c is Special Symbol\n",ch);
    }
    return(0);
}
