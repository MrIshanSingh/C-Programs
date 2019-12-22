#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,item,low,high,n,mid;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter item to be found \n**Note- elements should be in ascending order");
    scanf("%d",&item);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==a[mid])
            printf("Item found at %d position",mid+1);
        if(item<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return  ;
}
