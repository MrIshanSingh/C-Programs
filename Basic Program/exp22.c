/*Enter the value of p,r and t and find out the simple interets*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,SI;
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("%f",SI);
    return 0;


}
