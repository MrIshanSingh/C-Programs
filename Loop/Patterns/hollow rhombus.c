#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("(Enter half of no. of rows) - 1:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
    {

        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {


            if(k==1)
                printf("*");
            else
                printf(" ");
        }
        for(l=1;l<i;l++)
        {
            if(l==i-1)
                printf("*");
            else
                printf(" ");
        }   printf("\n");
    }
    for(i=2;i<=n;i++)
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


