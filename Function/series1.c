#include<stdio.h>
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
        return(p);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    float sum;
    int i,n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+(power(i,i))/fact(i);
        i++;
    }
    printf("Sum of series=%f",sum);
}
