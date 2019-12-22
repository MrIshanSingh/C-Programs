#define MAX 10
#include<stdio.h>
#include<limits.h>
int main()
{
    int a[MAX],i,j,n,item,temp,max1,max2;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray elements :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    max1=max2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
            {
            max2=max1;
            max1=a[i];
            }
        else if(a[i]>max2 && a[i]<max1)
            max2=a[i];
    }
    printf("Largest no. = %d \t Second largest no = %d",max1,max2);
    return 0;
}

