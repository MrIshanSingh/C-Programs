#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==1||j==1||j==n||i==n)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        return 0;
}
