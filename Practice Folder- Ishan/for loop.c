#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter fist no.");
    scanf("%d",&a);
    printf("Enter common difference.");
    scanf("%d",&b);
    printf("Enter last no.");
    scanf("%d",&c);
    for (i=a; i<=c, i=i+b;)
    {printf("\n%d",i);
    }
    return 0;
}
