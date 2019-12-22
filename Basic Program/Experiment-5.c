/*The length and breadth of a rectangle amd radius of a circle are inout through keyboard. Wrtie a program to calculate the area and perimeter
of the rectangle, and the area and perimeter of circle.*/
#include<stdio.h>
int main()
{
    float l,b,r,r_area,r_perimeter,c_area,circumference;
    printf("Enter length of rectangle:");
    scanf("%f",&l);
    printf("\nEnter breath of rectangle:");
    scanf("%f",&b);
    printf("\nEnter radius of circle:");
    scanf("%f",&r);
    r_area=l*b;
    r_perimeter=2*(l+b);
    c_area=3.14*r*r;
    circumference=2*3.14*r;
    printf("\nArea of rectangle=%f",r_area);
    printf("\nPerimeter of rectangle=%f",r_perimeter);
    printf("\nArea of circle=%f",c_area);
    printf("\nCircumference of circle=%f",circumference);
    return 0;
}
