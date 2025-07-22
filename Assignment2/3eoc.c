#include<stdio.h>
int main()
{
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    (no%2==0)?printf("even"):printf("odd");
    return 0;
}