#include<stdio.h>
int main()
{
    int n,n1,a,rev=0;
    printf("Enter no.");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(n1==rev)
        printf("%d is a palindrome no.",n1);
    else
        printf("%d is not a palindrome no.",n1);
}

