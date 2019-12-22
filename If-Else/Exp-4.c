#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("Maximum=%d",max);
    return 0;
}

