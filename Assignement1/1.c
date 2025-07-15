#include<stdio.h>
int main()
{
    float area,radius,circimference;
    printf("\nEnter the radius of cicle");
    scanf("%f",&radius);
    area=(3.14*radius*radius);
    printf("\nArea is=%.2f",area);

   circimference=(2*3.14*radius);
    printf("\ncircumference is=%.2f",circimference);
    return 0;
}