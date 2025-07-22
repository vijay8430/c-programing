#include<stdio.h>

int main()
{ 
     char ch;
    printf("\nEnter the digit or character on uppercase and lowercase");
    scanf("%c",&ch);
    if(ch>='1' && ch<='9')   
    {
       printf("\nDigit");
    }
    else if(ch>='A' && ch<='Z')
    {
       printf("\nUppercase");
    }
    else if(ch>='a' && ch<='z')
    {
      printf("\nLowercase");
    }
    else
    {
        printf("\nSpecial character");
    }

    return 0;
}