#include<stdio.h>
int main()
{
    int a;
    printf("Enter no.:");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n%d is an even no.",a);
    else
        printf("\n%d is an odd no.",a);
    return 0;
}
