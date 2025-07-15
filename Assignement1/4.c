#include<stdio.h>
int main()
{
    float u, a,t, d ,v,s;
    printf("\nEnter the initial velocity and acceleration and time");
    scanf("%f%f",&u,&a,&t);
    v=(u+a*t);
    printf("\nVelocity is=%.2f",v);
    s=(u+a*t*t);
    printf("\nSpeed is=%.2f",s);
    return 0;
}