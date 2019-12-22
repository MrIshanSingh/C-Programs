#include<stdio.h>
int main()
{
    int qty,dis=0;
    float price,tot;
    printf("Enter quantity and price");
    scanf("%d%f",&qty,&price);
    if(qty>1000)
        dis=10;
    tot=(qty*price)-(qty*price*dis/100);
    printf("\nTotal Expenses=%f",tot);
    return 0;
}
