#include<stdio.h>
int main()
{
    int a[5],i,min,max;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    min=max=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("Max=%d",max);
    printf("\tMin=%d",min);
}
