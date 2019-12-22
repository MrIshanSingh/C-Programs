#include<stdio.h>
#include<conio.h>
int main()
{
int i,a ;
clrscr();
printf("\n enter the number of factorial");
scanf("%d,&i);
f=fact(i);
printf(the factorial of a number is %d",a);
getch();
return 0;
}
int fact(int n)
int x=1,i;
for(i=1 ;i<=n; i++)
{
x=x*i
return x;
}
