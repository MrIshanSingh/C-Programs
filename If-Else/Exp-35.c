#include<stdio.h>
int main()
{
    int nod;
    printf("Enter no. of days");
    scanf("%d",&nod);
    if(nod>=1&&nod<=1)
        printf("Fine=%.2f",nod*.5);
    else if(nod>=6&&nod<=10)
        printf("Fine=%.2f",nod*1.0);
    else if(nod>=11&&nod<=30)
        printf("Fine= 5");
    else
        printf("Membership canceled");

    return 0;
}
