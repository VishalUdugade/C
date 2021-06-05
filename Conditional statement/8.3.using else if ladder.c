#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    system("cls");
    ch=getchar();
    if(ch>='a' && ch<='z')
    {
        prinrf("%c is Lowercase Charater",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c is Uppercase charater",ch);
    }
    else
    {
        printf("%c is special symbol");
    }
    getch();
}
