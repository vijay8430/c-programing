#include<stdio.h>
int main()
{
    char cha;
   printf("\nA to Z\n");

    for(cha='A';cha<='Z';cha++)
    {
    printf(" %d",cha);
    }

    printf("\na to z\n");
    for(cha='a';cha<='z';cha++)
    {
    printf(" %d",cha);
    }

    printf("\n0 to 9\n");
    for(cha='0';cha<='9';cha++)
    {
    printf(" %d",cha);
    }
    return 0;
}