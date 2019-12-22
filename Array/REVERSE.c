#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,j,n,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray elements ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nArray elements after reversing ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

