#include<stdio.h>
int main()
{
    int i,j,k,n,l,m;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=1;l<i;l++)
        {
            m=k;
            m--;
            printf("%d",--m);
        }
        printf("\n");
    }
    return 0;
}

