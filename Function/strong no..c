//Strong no is a number in which sum of factorial of individual digits is equal to the number
#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
void strong(int low, int u)
{
    int d,i,n,sum=0;
    for(i=low;i<=u;i++)
    {
        sum=0;
        n=i;
        while(n>0)
        {
            d=n%10;
            sum=sum+factorial(d);
            n=n/10;
        }
        if(i==sum)
            printf("%d is a strong no.",i);

    }

}
int main()
{
    int a,b;
    printf("Enter lower limit and upper limit :");
    scanf("%d%d",&a,&b);
    strong(a,b);
    return 0;
}
