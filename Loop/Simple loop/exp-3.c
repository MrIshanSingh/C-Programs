#include<stdio.h>
int main()
{
    int a,b,i,pow;
    pow=1;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    printf("%d^%d = %d",a,b,pow);
    return 0;
}
