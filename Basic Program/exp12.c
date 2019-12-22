#include<stdio.h>
#include<conio.h>
int main()
{
   int sp,p,cp;
   float cpi;
   printf("Enter the selling price and profit of 15 item");
   scanf("%d %d",&sp,&p);
   cp=sp-p;
   cpi=cp/15;
   printf(" cost price is%d",cp);
   printf(" \n cost price per item is  %f",cpi);
   return 0;


}


