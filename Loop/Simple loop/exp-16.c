#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter value of n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            {sum=sum+i;
    }
    }
    printf("Sum=%d",sum);
    return 0;
}

