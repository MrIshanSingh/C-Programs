#include<stdio.h>
int main()
{
    int n1,n,i,count;
    count=0;
    printf("Enter value of n");
    scanf("%d",&n);
    n1=n;
    for(;n>0;)
    {
        n=n/10;
        count++;
    }
    printf("No. of digits in %d=%d",n1,count);
    return 0;
}


