#include<stdio.h>
int main()
{
    int a,b;
    char op;
   
    printf("\nEnter the a and op and b");
    scanf("%d %c %d",&a,&op,&b);
    switch (op)
    {
    case '+':printf("\n Addition  %d %c %d = %d",a,op,b,(a+b));
        
    break;
    case '-':printf("\n Substraction  %d %c %d = %d",a,op,b,(a-b));
        
    break;
    case '*':printf("\n multipliaction %d %c %d = %d",a,op,b,(a*b));
        
    break;
    case '/':printf("\n Division  %d %c %d = %d",a,op,b,(a/b));
        
    break;
    
    default:printf("\nInvalid number");
        break;
    }
    return 0;
}