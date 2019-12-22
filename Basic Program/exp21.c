#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e,sum,avg,per;
    printf("Enter the marks of 5 subject:");
    scanf("%f  %f  %f  %f   %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    per=(sum/500)*100;
    printf("\n%f",sum);
    printf("\n%f",avg);
    printf("\n%f",per);
    return 0;



}
