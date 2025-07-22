#include<stdio.h>
int main()
{
    int co,se,profit,loss;
    printf("\nEnter the cost price");
    scanf("%d",&co);
    printf("\nEnter the selling price");
    scanf("%d",&se);
    profit=(se-co);
    loss=(se-co);
    if(co<se)
    printf("profit %d",profit);
    else
    printf("\nloss %d",loss);
    return 0;
}