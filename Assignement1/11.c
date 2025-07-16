#include<stdio.h>
int main()
{
    float h,w,l,w1,w2,d1,d2,painted,whitewashed;

    printf("\nEnter the dimension of room ");
    printf("\nEnter the height of room");
    scanf("%f",&h);
    printf("\n/Enter the width of room");
    scanf("%f",&w);
    printf("\n/Enter the length of room");
    scanf("%f",&l);

    printf("\nEnter the dimension of  door");
    printf("\n/Enter the height of door");
    scanf("%f",&d1);
    printf("\n/Enter the length of door");
    scanf("%f",&d2);

    printf("\nEnter the dimension of  window");
    printf("\n/Enter the height of window");
    scanf("%f",&w1);
    printf("\n/Enter the length of window");
    scanf("%f",&w2);
    
    painted=(2*(l+h)*h-(d1*d2)-2*(w1-w2));
    whitewashed=(l*w);
    printf("\nPainted area %.2f",painted);
    printf("\nWhitewashed area %.2f",whitewashed);
    return 0;

}