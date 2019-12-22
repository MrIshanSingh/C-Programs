#include<stdio.h>
int isEven(int a)
{
    return(a%2==0?1:0);
}
int main()
{
    int n;
    printf("Enter value of num");
    scanf("%d",&n);
    if (isEven(n))
        printf("%d is even",n);
    else
        printf("%d is odd",n);

}

