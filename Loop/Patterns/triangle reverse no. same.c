#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   s=1;
        for(j=i;j<=n;j++)
            printf("%d",i);
        printf("\n");
    }
return 0;
}

