#include<stdio.h>
int main()
{ 
    float surfacearea,radius,height,volume;
    printf("\nEnter the surface radius and height");
    scanf("%f%f",&radius,&height);

    surfacearea=((2*3.14*radius*radius)+(2*3.14*height));
    printf("s\nurface area=%.2f",surfacearea);

    volume=(3.14*radius*radius*height);
    printf("\nvolume is=%.2f",volume);
    return 0;
}