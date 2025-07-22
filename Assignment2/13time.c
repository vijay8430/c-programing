#include<stdio.h>
int main()
{
    int h,m,s;
    printf("\nEnter the time hour ,minute second ");
    scanf("%d%d%d",&h,&m,&s);
    if(h>=0 && h<=24)
      if(m>=0 && m<=60)
        if(s>=0 && s<=60)
          printf("\nTime is valid");
        else
        printf("\nTime is invalid");
    return 0;

}