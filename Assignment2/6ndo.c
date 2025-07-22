#include<stdio.h>
int main()
{
    int no;
    printf("\n Enter the number ");
    scanf("%d",&no);
   
     
     if(no%5==0 || no%7==0)
       printf("\n Number is divisible by 5 or 7 ");
       else if(no%5!=0 || no%7!=0)
       printf("Number is not divisible by 5 or 7");
     
    return 0;
}