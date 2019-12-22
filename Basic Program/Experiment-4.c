/*Temperature of a city in Fahrenheit degrees is input through the keyboard.Write a program to convert the temperature into Centigrade.*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&f);
    c=5.0/9*(f-32);
    printf("\nTemperature in Fahrenheit:%f",f);
    printf("\nTemperature in Centigrade:%f",c);
    return 0;


}
