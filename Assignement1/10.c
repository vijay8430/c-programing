#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    printf("Enter x and y cooordinates first value(x1,x2) \n");
    scanf("%f%f",&x1,&y1);
     printf("Enter x and y cooordinates second value(y1,y2) \n");
    scanf("%f%f",&y1,&y2);

    distance=(sqrt(pow((x2 - x1),2)+pow((y1 - y2),2)));

    printf("Distance of two ponts %f",distance);
    return 0;
}