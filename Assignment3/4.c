#include<stdio.h>
int main()
{
    int ch;
    float r,aoc,h,cic,voc;
    printf("\n1.Area of circle\n2.Circumference of circle\n3.Volume of Sphere\n");
    printf("\nEnter the choise");
    scanf("%d",&ch);
    printf("\nEnter the radius");
    scanf("%f",&r);
    switch(ch)
    {
        case 1: aoc=3.14*(r * r);
                printf("Area of circle is:%f",aoc);
        break;
        case 2:cic=(2*3.14*r);
               printf("\nCircumference of circle =%f",cic);
        break;  
             
        case 3:printf("\nEnter the height");
             scanf("%f",&h);
             voc=(3.14*r*r*h);
             printf("\nvolume of sphere =%f",voc);
        break;

    }
    return 0;
}