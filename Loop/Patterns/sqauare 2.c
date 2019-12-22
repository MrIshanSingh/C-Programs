#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(i+j==5&&i!=1&&i!=4)
                    printf(" ");

                else
                    printf("*");
            }
            printf("\n");
        }
        return 0;
}

