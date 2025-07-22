#include<stdio.h>
int main()
{
    int d,charge;
    printf("\nEnter days of member late ");
    scanf("%d",&d);
    if(d<=5)
    {
      charge=50;
    }
    else if(d>=6 && d<=10)
    {
        charge=100;
    }
    else if(d>=10)
    {
        charge=200;
    }
    printf("\nRs.fine %d",charge);
    return 0;
}