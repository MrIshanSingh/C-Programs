#include<stdio.h>
#include<conio.h>
int main()
{
    int days,year,week,day1,r;
    printf("Enter the days:");
    scanf("%d",&days);
    year=days/365;
    r=days% 365;
    week=r/7;
    day1=r%7;
    printf("\n%d is the no. of year:",year);
    printf("\n%d is the no. of week:",week);
    printf("\n%d is the no. of days:",day1);
    return 0;

}
