#include<stdio.h>
int main()
{
    int a[5],i,even=0,odd=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array Elements are:");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nEven= %d   Odd=%d",even,odd);
    return 0;
}
