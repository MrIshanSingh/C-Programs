#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,j,k,data,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
            data=a[i];
            for(j=i+1;j<n;j++)
            {
                if(data==a[j])
                {
                    for(k=j+1;k<n;k++)
                        a[k-1]=a[k];
                    n=n-1;
                    j=j-1;
                }
            }
    }
    printf("\nElements in array after deleting duplicate items:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
