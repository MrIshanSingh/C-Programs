#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter no. of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1||i==r)
                printf("*");
            else if(j==1||j==i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }
    return 0;
}

