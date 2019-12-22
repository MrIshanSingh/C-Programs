/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary*/
#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("Enter basic salary of Ramesh:");
    scanf("%f",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    gs=bs+da+hra;
    printf("\nBasic Salary=%6.2f",bs);
    printf("\nDA=%6.2f",da);
    printf("\nHRA=%6.2f",hra);
    printf("\nGross Salary=%6.2f",gs);
    return 0;
}
