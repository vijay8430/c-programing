#include<stdio.h>
int main()
{
    int x,y,ch,v,p,t;
    printf("\n1.: Equality\n2.Less Than\n3.Quotient and Remainder\n4.Range\n5.Swap");
    printf("\nEnter your choise");
    scanf("%d",&ch);
    printf("\nEnter two numbers");
    scanf("%d%d",&x,&y);

    switch(ch)
    {
        case 1:(x==y)?printf("equal"):printf("not equal");
        break;
        case 2:(x<y)?printf("x is less than y"):printf("x is not less than y");
        break;
        case 3:v=(x/y);
               printf("\nquotient %d",v);
               v=(x%y);
               printf("\nremainder %d",v);
        break;
        case 4:printf("\nenter the between no");
               scanf("%d",&p);
              (p>=x &&p<=y)?printf("\nnumber is betwwen"):printf("\nnumber is not between");
              break;
        case 5:
               y=(x+y)-(x=y);
               printf("x=%d",x);
               printf("y=%d",y);
           
    }
    return 0;

}