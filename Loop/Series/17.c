#include<stdio.h>
int main()
{
    int i,j,n,f,p;
    float sum;
    printf("Enter no. of terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1,p=1;
        for(j=1;j<=i;j++)
            f=f*j;
        for(j=1;j<=i;j++)
            p=f*i;
        sum=sum+(float)p/f;
        i++;
    }
    printf("Sum of series=%.2f",sum);
    return 0;
}



