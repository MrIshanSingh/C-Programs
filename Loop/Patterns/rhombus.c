#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("*");
        for(l=i;l<n;l++)
            printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("*");
        for(l=i;l<n;l++)
            printf("*");
        printf("\n");
    }
    return 0;
}

