#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b &&a>c)
    printf("\nA is maximum");
    else if(b>a && b>c)
    printf("\n b is maximum");
    else
    printf("\n c is maximum");

     if(a<b &&a<c)
    printf("\nA is minimum");
    else if(b<a && b<c)
    printf("\n b is minimum");
    else
    printf("\n c is minimum");
    return 0;
}