/*find the area of triangle if base and height is the input from keyboard*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float b,h,ar;
    printf("Enter the base and height of triangle:");
    scanf("%f  %f",&b,&h);
    ar=0.5*b*h;
    printf("%f is the area of triangle",ar);
    return 0;
}
