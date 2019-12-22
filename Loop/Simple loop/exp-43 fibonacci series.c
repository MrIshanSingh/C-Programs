#include<stdio.h>
int main()
{
    int i,f1=0,f2=1,f3,n;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    printf("%d\n%d",f1,f2);
    i=1;
    while(i<=n)
    {
        f3=f1+f2;
        printf("\n%d",f3);
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}
