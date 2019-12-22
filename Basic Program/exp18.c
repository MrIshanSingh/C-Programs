#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the two angles:");
    scanf("%d %d",&a,&b);
    c=180-(a+b);
    printf("%d is the third angle of triangle",c);
    return 0;

}
