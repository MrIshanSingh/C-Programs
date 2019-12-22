/*write a program to caculate p,t,r and find compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    scanf("%f",&p,&r,&t);
    ci=p*pow((1+r/100),t);
    printf("%f is the ci:",ci);
    return 0;


}

