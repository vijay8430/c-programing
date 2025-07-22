#include<stdio.h>
int main()
{
    int y;
    printf("\nEnter the year");
    scanf("%d",&y);
    if( y%4==0 && y%100!=0 && y%400==0 )
    printf("\nYear is leap");
    else
    printf("\nYear is not leap");

    return 0;
}