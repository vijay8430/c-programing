#include<stdio.h>
int main()
{
    int id,bs;
    float hr=10,bd=30,ptax=5,hs;
    printf("\nEnter the employee id=");
    scanf("%d",&id);
    printf("\nEnter the basic salary");
    scanf("%d",&bs);
    hr=(bs*hr/100);
    bd=(bs*bd/100);
    ptax=(bs*ptax/100);
    hs=(bs-hr-bd-ptax);
    printf("\nHouse rent(%%)%f",hr);
    printf("\nBasic dearness(%%)%f",bd);
    printf("\nProfessional tax(%%)%f",ptax);
    printf("\nHome salary%f",hs);
    return 0;
}