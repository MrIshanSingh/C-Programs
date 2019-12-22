//Deleting an element from a specified position
#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,pos,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter position of element to be deleted");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n=n-1;
    printf("\nArray after deletion:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
