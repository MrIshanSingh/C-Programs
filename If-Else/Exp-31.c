#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter value of basic salary");
    scanf("%f",&bs);
    if(bs<=10000)
    {
        hra=bs*20/100;
        da=bs*80/100;

    }
    else if(bs<=20000)
    {
        hra=bs*25/100;
        da=bs*90/100;
    }
    else if(bs>20000)
    {
        hra=bs*30/100;
        da=bs*95/100;
    }
    gs=bs+da+hra;
    printf("\nBasic Salary:%f",bs);
    printf("\nHRA:%f",hra);
    printf("\nDA:%f",da);
    printf("\nGross Salary:%f",gs);
}

