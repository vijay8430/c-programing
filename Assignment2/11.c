#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("\nTrue compare equle equle");
    else if(a>b)
    printf("\nTrue greater than");
    else if(a<b)
    printf("true less than");
    else
    printf("Not compare");

    
}