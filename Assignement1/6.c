#include<stdio.h>
int main()
{
    float l,b,h,sa,vo;
    printf("\nenter the length=");
    scanf("%f",&l);
    printf("\nenter the breadth=");
    scanf("%f",&b);
    printf("\nEnter the height=");
    scanf("%f",&h);
    sa=(2*(l*b+l*h+b*h));
    vo=(l*h*b);
   
    printf("\nsurface area is=%f",sa);
     printf("\nVolume is =%f",vo);
    return 0;
}