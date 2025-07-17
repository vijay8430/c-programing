#include<stdio.h>
int main()
{   float total,disper,discount,payamount;
    int id,p1,p2,p3,q1,q2,q3;
    char n1[100],n2[100],n3[100];
    printf("\nEnter the product id\n");
    scanf("%d",&id);
    printf("\nEnter the product Name1,product Name2,product Name3\n");
    scanf("%s %s %s",&n1,&n2,&n3);
    printf("\nEnter the product Price1,product Price2,product Price3\n");
    scanf("%d %d %d",&p1,&p2,&p3);
    printf("\nEnter the product Quantity1,Quantity2,Quantity3\n");
    scanf("%d %d %d",&q1,&q2,&q3);
    total=(p1*q1)+(p2*q2)+(p3*q3);
    if(total>=100000)
        disper=10;
    else if(total>=80000)
        disper=8;
    else if(total>=50000)
        disper=5;
    else if(total>=3000)
        disper=3;
    else
        disper=0;

    discount=((total*disper)/100);
    payamount=(total-discount);

    printf("\nTotal amount=%.2f",total);
    printf("\nTotal discount amount=%.2f",discount);
    printf("\nDiscount percentage=%.2f",disper);
    printf("\nPayamount=%.2f",payamount);
    
    return 0;
}