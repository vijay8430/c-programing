#include<stdio.h>
int main()
{
    int ten,one,five, amount;
    
    printf("\nEnter withdrawn amount user");
    scanf("%d",& amount);
    
    ten=amount/10;
    amount=amount%10;
  
    five=amount/5;
    amount=amount%5;
   
    one=amount;

    printf("\nten: %d",ten);
    printf("\nfive:%d",five);
   printf("\none: %d",one);

    return 0;
}
