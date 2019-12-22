#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Length of 3 sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
        printf("The given triangle is valid");
    else
        printf("The given triangle is invalid");
    return 0;
}

