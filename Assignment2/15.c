#include<stdio.h>
int main()
{
    int s,tax;
    printf("\nEnter the basic salary");
    scanf("%d",&s);
    if(s<150000)
     tax=0;
    if(s>=150000 && s<=300000)
    tax=20;
    if(s>=300000)
    tax=30;
    printf("\nIncome tax as per %d",tax);
    
    return 0;
}