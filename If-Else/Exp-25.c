#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter angles of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        printf("The given triangle is valid");
    else
        printf("The given triangle is invalid");
    return 0;
}
