#include<stdio.h>
int main()
{
int a,b;
printf("\n Enter two numbers");
scanf("%d %d",&a,&b);
printf("value before swap");
printf("\n a=%d \n=%d",a,b);
swap(&a,&b);
printf("\n the value of a&b after swap");
printf("\n a=%d \n b=%d");
return 0;
}

