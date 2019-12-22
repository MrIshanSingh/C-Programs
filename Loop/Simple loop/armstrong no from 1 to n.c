#include<stdio.h>
#include<math.h>
int main()
{
    int  i,j,p,a,n,n1,n2,n3,sum=0,count=0;
    printf("Enter range");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n1=n2=n3=i;
        sum=0;
        count=0;
        while(n3>0)
    {
        count++;
        n3=n3/10;
    }
    while(n1>0)
    {
        p=1;
        a=n1%10;
        for(j=1;j<=count;j++)
            p=p*a;
        sum=sum+p;
        n1=n1/10;

    }
    if(sum==n2)
        printf("\n%d is an armstrong no.",n2);

    }
return 0;
}


