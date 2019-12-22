#include<stdio.h>
void add(int,int);
int main()
{
    int a=10, b=20;
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int s;

    s=a+b;
    printf("Addition=%d",s);
}
