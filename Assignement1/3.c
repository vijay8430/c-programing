#include<stdio.h>
int main()
{
    float fahrenheit,celsius,kelvin;
    printf("\n Enter the temperature in fahrenkeit=");
    scanf("%f",&fahrenheit);

    celsius=((5.0/9.0)*(fahrenheit - 32));
    printf("celsium is=%.2f",celsius);

    kelvin=(celsius+273.15);
    printf("kelvin is =%.2f",kelvin);
    return 0;
}