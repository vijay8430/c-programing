#include<stdio.h>
int main()
{
    int i1,i2,i3,r1,r2,r3,q1,q2,q3;
    float total,discount,disper,amt;
    printf("\nEnter the details 1");
    printf("\nEnter the items");
    scanf("%s",&i1);
    printf("\nEnter the Rate");
    scanf("%d",&r1);
    printf("\nEnter the quantity");
    scanf("%d",&q1);

    printf("\nEnter the details 2");
    printf("\nEnter the items");
    scanf("%s",&i2);
    printf("\nEnter the Rate");
    scanf("%d",&r2);
    printf("\nEnter the quantity");
    scanf("%d",&q2);
 
    printf("\nEnter the details 3");
    printf("\nEnter the items");
    scanf("%s",&i3);
    printf("\nEnter the Rate");
    scanf("%d",&r3);
    printf("\nEnter the quantity");
    scanf("%d",&q3);
    
    if(total>=300000 )
    {
        disper=20;
    }
    else if(total>=100000)
    {
        disper=15;
    }
    else if(total>=50000)
    {
        disper=8;
    }

  
    total=((r1*q1)+(r2*q2)+(r3*q3));
    printf("\nTotle is =%f",total);
    discount=((total-disper)/100);
    amt=(total-discount);
    printf("\ndiscount:%f",discount);
    printf("\nTotle amount =%f",amt);
    printf("\nDiscount %f",disper);
  

    return 0;
}