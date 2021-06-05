#include<stdio.h>

int main()
{
    int ascii=0;

    printf("\t========================================================\n");
    while(ascii<=127)
    {
        printf("\n\t%c = %d\n",ascii,ascii);
        ascii++;
    }
    printf("\t========================================================\n");
    getch();
    return(0);
}
