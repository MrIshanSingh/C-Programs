#include<stdio.h>
int main()
{
    int i,j,k,l,s,n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {


            if(k==1)
                printf("/");
            else if(i==n)
                    printf("-");
            else if(k==(n/2)+1&&i==(n/2)+1)
                printf("#");
            else
                printf("@");
        }
        for(l=1;l<i;l++)
        {
            if(l==i-1)
                printf("\\");
            else if(i==n)
                printf("-");

            else
                printf("@");
        }
        printf("\n");


    }
    printf("Made by Ishan");
    return 0;
}

