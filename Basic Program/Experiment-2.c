/*The distance between two cities (in km) is input through the keyboard. Write a program to convert and print this distance in meters,
feet, inches and cm.*/
#include<stdio.h>
int main()
{
    float d,m,ft,in,cm;
    printf("Enter the distance in km");
    scanf("%f",&d);
    m=d*(1000);
    cm=m*100;
    in=cm/2.54;
    ft=in/12;
    printf("\nDistance in km=%f km",d);
    printf("\nDistance in meters=%f m",m);
    printf("\nDistance in feet=%f feet",ft);
    printf("\nDistance in inches=%f inches",in);
    printf("\nDistance in cm=%f cm",cm);
    return 0;
}
