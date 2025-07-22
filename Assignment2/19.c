#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch; 
    printf("\nEnter the lowercase character");
    scanf("%c",&ch);
    ch=toupper(ch);
    printf("\nUppeercase character%c",ch);
    return 0;
}