#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter anything");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("\nCapital letter %d",ch);
        else if(ch>=97 && ch<=122)
         printf("\nSmall letters%d",ch);
         else if(ch>=48 &&ch<=57)
         printf("\nDigit %d",ch);
         else 
         printf("\nSpecial symbol %d",ch);
            
        
    
    return 0;

}