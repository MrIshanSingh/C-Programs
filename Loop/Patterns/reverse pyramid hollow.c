#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
        {   if(k==i||i==1)
                printf("*");
            else
                printf(" ");
        }
        for(l=i;l<n;l++)

        {   if(l==n-1||i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

