#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter value of a and b :");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;

    printf("\nSum of a and b =%d",c);
    printf("\nDifference of a and b =%d",d);
    printf("\nProduct of a and b =%d",e);
    printf("\nDivision of a and b =%d",f);
    printf("\nModulus of a and b =%d",g);
    return 0;

}
