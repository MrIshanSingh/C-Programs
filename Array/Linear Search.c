#include<stdio.h>
int main()
{
    int a[7],i,flag=0,item;
    printf("Enter elements in array:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter item to be found:");
    scanf("%d",&item);
    for(i=00;i<7;i++)
    {
        if(a[i]==item)
        {
             flag=1;
             break;
        }
    }
    if(flag==1)
        printf("Item found at %d position",i+1);
    else
        printf("Item not found");
    return 0;
}
