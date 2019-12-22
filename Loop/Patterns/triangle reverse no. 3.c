#include<stdio.h>
int main()
{
    int i,j,n,s=1;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("%d",s++);
        printf("\n");
    }
return 0;
}
