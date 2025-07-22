#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int m1,m2,m3,totla,avg;
    printf("\nEnter three subject\n");
    scanf("%s%s%s",&s1,&s2,s3);

    printf("\nEnter three subject marks\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    totla=(m1+m2+m3);
    avg=(totla/3);
    printf("\ntotle%d",totla);
    printf("\nAverage is %d",avg);
    if(avg>=90)
    printf("\n Class-I");
    else if(avg>=60)
    printf("\nClass-II");
    else if(avg>=35)
    printf("\n Pass Class");
    else 
    printf("\nFail ");

    return 0;
}