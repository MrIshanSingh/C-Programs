#include<stdio.h>
float add(float,int);
int main()
{
    float a,sum;
    int b;
    printf("Enter value of a");
    scanf("%f",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    sum=add(a,b);
    printf("Sum=%f",sum);
}
float add(float x,int y)
{
    float s;
    s=x+y;
    return(s);
}
