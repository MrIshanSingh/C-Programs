#include<stdio.h>
int main()
{
    int i,j,k,n,t=0;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            t=t+1;
            printf("%d",t);
        }

        printf("\n");
    }
    return 0;
}
