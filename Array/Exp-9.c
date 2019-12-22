//To insert an element in an array
#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,item,n,pos;
    printf("No. of elements to be entered in an array =");
    scanf("%d",&n);
    if(n>=MAX)
        printf("Elements cannot be inserted");
    else
    {for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray elements :");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);
    printf("\nEnter item value __ at position __");
    scanf("%d%d",&item,&pos);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[i+1]=item;
    n=n+1;
    printf("\nArray elements after insertion :");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);
    }
    return 0;
}
