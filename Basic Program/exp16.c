#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,y,power;
    printf("Enter the values of x and y:");
    scanf("%f  %f",&x,&y);
    power=pow(x,y);
    printf(" %f is power of %f^%f",power,x,y);
    return 0;
}
