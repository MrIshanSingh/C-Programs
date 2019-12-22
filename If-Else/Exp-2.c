#include<stdio.h>
int main()
{
    int cy,jy; //cy=Current year, jy=Joining year
    printf("Enter current and joining year");
    scanf("%d%d",&cy,&jy);
    if((cy-jy)>3)
        printf("Bonus received : Rs.2500");
    return 0;
}
