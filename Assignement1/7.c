#include<stdio.h>
int main()
{
    int n1,n2;
    printf("\nEnter two numbers");
    scanf("%d%d",&n1,&n2);
    printf("\nbefore swaping%d %d",n1,  n2);
   n1=(n1+n2);
   n2=(n1-n2);
   n1=(n1-n2);
   
  printf("\n(using + and _)after swaping :n1=%d,n2=%d",n1,n2);
   printf("\nbefore swaping%d %d",n1,  n2);
   n1=(n1*n2);
   n2=(n1/n2);
   n1=(n1/n2);
  printf("\n(using + and _)after swaping :n1=%d,n2=%d",n1,n2);
    return 0;
}