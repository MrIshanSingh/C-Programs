#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        max=a;
    if(b>a&&b>c)
        max=b;
    if(c>a&&c>b)
            max=c;
    printf("Maximum:%d",max);
    return 0;
}

