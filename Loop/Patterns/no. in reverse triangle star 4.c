#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   t=n;
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            {printf("%d",t);
            t=t-1;}
        printf("\n");
    }
    return 0;
}
