#include<stdio.h>
int main()
{
    int i,fact,n;
    printf("Enter no.:");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d",n,fact);
    return 0;
}
