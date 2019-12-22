#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            {
                if(i==1||i==n)
                    printf("#");
                else if(k==i||k==1)
                        printf("#");
                else
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}
