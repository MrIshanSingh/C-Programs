#include<stdio.h>
int main()
{
    int a[10],i,neg=0;
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {   if(a[i]<0)
            neg++;
    }
    printf("Total no. of Negative values=%d",neg);
     return 0;
}

