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
    printf("\nArray elements before sorting");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nArray elements after sorting");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
