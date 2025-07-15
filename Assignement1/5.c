#include<stdio.h>
int main()
{
    int a,b,am,hm;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    am=(a+b/2 );
    printf("\nAithematic  is =%.2f",am);
    hm=((a*b)/(a+b));
    printf("\nharmonic is=%.2f",hm);
    return 0;
}