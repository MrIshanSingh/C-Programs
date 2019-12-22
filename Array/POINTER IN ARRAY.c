#include<stdio.h>
int main()
{
    int a[5]={2,4,6,8,10};
    int i;
    for(i=0;i<5;i++)
        {
        printf("\nAddress=%u  address %u ",(a+i),(i+a));
        printf("\t Value=%d   Value=%d ",*(a+i),*(i+a));
        printf("\t Value=%d   Value=%d ",a[i],i[a]);
        }
        return 0;
}
