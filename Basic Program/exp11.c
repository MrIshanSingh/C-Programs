/*a cashier has a currency notes of 10,50 and 100.if the amount to be withdrawn is input through keyboards in hundread.
find the total number of currency notes of each  denomination the cashier will have to give to the withdrawer*/
#include<stdio.h>//4567=4000+500+50+10+7
#include<conio.h>
int main()
{
    int a,noh,nof,not;
    printf("Enter the rupee:");
    scanf("%d",&a);
    noh=a/100;
    a=a%100;
    nof=a/50;
    a=a%50;
    not=a/10;
    a=a%10;
    printf("\n%d is the no. of notes in hundread:",noh);
    printf("\n%d is the no. of notes in fifty:",nof);
    printf("\n%d is the no. of notes in ten:",not);
    return 0;

}
