#include<stdio.h>
int main()
{
    int i,j,n,f;
    float sum;
    printf("Enter no. of terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        sum=sum+i/(float)f;
        i++;
    }
    printf("Sum of series=%.2f",sum);
    return 0;
}

