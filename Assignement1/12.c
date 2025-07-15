#include<stdio.h>
int main()
{
    char  cha;
    printf("Enter the characeter \n");
    scanf("%c",&cha);
    
    printf(" previous  %c ",cha-1);
    printf(" next  %c ",cha+1);
    
    return 0;
}