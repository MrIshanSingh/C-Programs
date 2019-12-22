#include<stdio.h>
int main()
{
    int n1,n,i,last,first;

    printf("Enter value of n");
    scanf("%d",&n);
    n1=n;
    last=n%10;
    for(i=1;i<n;i++)
    {
        n=n/10;

    }
    first=n;
    printf("First digit =%d",first);
    printf("\nLast digit =%d",last);
    return 0;
}


