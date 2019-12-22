/* If a 5 digit no. is input through the keyboard. Write a program to calculate the sum of its digits(Hint: Use % operator).*/
#include<stdio.h>
int main()
{
    int n,n1,sum,a,b,c,d,e;
    printf("Enter the five digit no.");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    n1=n1/10;
    b=n1%10;
    n1=n1/10;
    c=n1%10;
    n1=n1/10;
    d=n1%10;
    n1=n1/10;
    e=n1%10;
    sum=a+b+c+d+e;
    printf("Sum of five digits=%d",sum);
    return 0;
}
