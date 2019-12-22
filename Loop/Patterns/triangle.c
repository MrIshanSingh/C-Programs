#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("#");
        for(l=1;l<i;l++)
            printf("#");
        printf("\n");
    }
    return 0;
}

