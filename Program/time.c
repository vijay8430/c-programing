#include<stdio.h>
int main()
{
    int h,m,s;
    printf("\n Enter the hour ");
    scanf("%d",&h);
    printf("\n Enter the minutes");
    scanf("%d",&m);
    printf("\n Enter the second ");
    scanf("%d",&s);

    if(h>=0 && h<=24)
    {
        if(m>=0 && m<=60)
        {
            if(s>=0 && s<=60)
            {
                printf("\n Time is valid\n");
            }
            else
            {
                printf("\nsecond is invalid");
            }

        }
        else
        {
             printf("\n minute is invalid");
        }
    }
    else
    {
         printf("\n hour is invalid");
    }
    return 0;
}