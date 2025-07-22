#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)? printf("\nA is maximum=%d",a):(b>a && b>c)? printf("\nB is maximum=%d",b):printf("\nC is maximum=%d",c);
    (a<b && a<c)? printf("\nA is minimum=%d",a):(b<a && b<c)? printf("\nB is minimum=%d",b):printf("\nC is minimum=%d",c);

    return 0;
}