#include<stdint.h>
int main()
{
    int i,j,r,s;
    printf("Enter no. of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {   s=r;
        for(j=1;j<=i;j++)
            printf("%d",s--);
        printf("\n");

    }
    return 0;
}

