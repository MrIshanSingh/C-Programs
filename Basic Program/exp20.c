/*what is the area of equilateral traingle if length of side is given by the keyboard*/


#include<stdio.h>
#include<conio.h>
int main()
{
    float a,ar;
    printf("Enter the number:");
    scanf("%f",&a);
    ar=(sqrt(3)/4)*a*a;
    printf("%f is area",ar);
    return 0;
}
