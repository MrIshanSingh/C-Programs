#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,j,n,item,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray elements before sorting ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray elements after sorting ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
