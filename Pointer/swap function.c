#include<stdio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("Enter value of a and b :");
    scanf("%d%d",&a,&b);
    printf("Value of a and b before swapping a=%d     b=%d",a,b);
    swap(a,b);
    printf("\nValue of a and b after swapping a=%d     b=%d",a,b);
    return 0;
}
int swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
