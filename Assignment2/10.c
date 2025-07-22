#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the  Three side of tringle ");
    scanf("%d%d%d",&a,&b,&c);
    
    /*if(a>b && a>c)
    printf("\n A is greater=%d",a);
    else if(b>a && b>c)
    printf("\nB is greater =%d",b);
    else 
    printf("\nC is greater =%d",c);*/
  
    if(a+b>c && a+c>b && b+c>a)
    printf("\nvalid");
    else
    printf("invalid");
    return 0;
}