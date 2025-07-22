#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\n Enter the  lowercase character");
    scanf(" %c",&ch);
    ch=tolower(ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch=='u')
    printf("\n Vowels ");
    else
    printf("\n Consonant ");
    
    return 0;
}