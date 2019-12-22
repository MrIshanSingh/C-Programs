/*if 4 digit number is the input through keyboard,write  program to add 1st and last digit number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f,l,sum;
    printf("Enter the 4 digit number");
    scanf("%d",&n);
    f=n%10;
    l=n/1000;
    sum=l+f;
    printf("%d is the sum of first and second number",sum);
    return 0;


}
