#include<stdio.h>
#include<math.h>
int main()
{
    int  i,p,a,n,n1,n2,sum=0,count=0;
    printf("Enter no.");
    scanf("%d",&n);
    n2=n1=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(n1>0)
    {
        p=1;
        a=n1%10;
        for(i=1;i<=count;i++)
            p=p*a;
        sum=sum+p;
        n1=n1/10;

    }
    if(sum==n2)
        printf("%d is an armstrong no.",n2);
    else
        printf("%d is not an armstrong no.",n2);
}

