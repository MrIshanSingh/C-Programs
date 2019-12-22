#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,n,n1,rev;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n1;
    a=n1%10;//12345=5
    n1=n1/10;//1234
    b=n1%10;//4
    n1=n1/10;//123
    c=n1%10;//3
    n1=n1/10;//12
    d=n1%10;//
    n1=n1/10;
    e=n1%10;
    rev=a*10000+b*1000+c*100+d*10+e*1;
    printf("%d",rev);
    return 0;


}
