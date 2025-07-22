#include<stdio.h>
int main()
{
    int no;
    printf("\n Enter the number ");
    scanf("%d",&no);
    if(no>=0)
     if(no%5==0 && no%7==0)
      printf("Number is divisibel by 5 and 7");
     else
      printf("Number is not divisible by 5 and 7");
    else
    printf("\n no is negative");
    return 0;
}