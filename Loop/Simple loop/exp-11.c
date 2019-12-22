#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value of n");
    scanf("%d",&n);
    i=n;
    while(n>=1)
    {
        printf("%d",n);
        n--;
    }
    return 0;
}

