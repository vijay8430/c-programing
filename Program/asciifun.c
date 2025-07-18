#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\nEnter anything");
    scanf("%c",&ch);
    if(isupper(ch))
    {
    printf("\nCapital letter %d",ch);
    }
    else if(islower(ch))
    {
      printf("\nSmall letters%d",ch);
    }
    else if(isdigit(ch))
    {
         
    printf("\nDigit %d",ch);
    }
    else 
    {
    printf("\nSpecial symbol %d",ch);
    }
         
        
    
 
        
    
    return 0;

}