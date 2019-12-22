#include<stdio.h>
int main()
{
    int a[5],i,b[5];
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nArray Elements are:");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    for(i=0;i<5;i++)
        b[i]=a[i];
    printf("\nAfter copying Array Elements are:");
    for(i=0;i<5;i++)
        printf("%d",b[i]);
        return 0;
}


