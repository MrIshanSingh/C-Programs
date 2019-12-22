#include<stdio.h>
int add();
int main()
{
    int sum;
    sum=add();
    printf("Addition = %d",sum);
    return 0;
}
int add()
{
    int a=20, b=10,s;
    s=a+b;
    return(s);

}
