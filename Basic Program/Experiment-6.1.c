/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange contents of C and D with the help
of third variable*/
#include<stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter value of C and D:");
    scanf("%d%d",&c,&d);
    printf("\nValue of C and D before interchange:-");
    printf("\nC=%d",c);
    printf("\tD=%d",d);
    temp=c;
    c=d;
    d=temp;
    printf("\n\nValue of C and D after interchange:-");
    printf("\nC=%d",c);
    printf("\tD=%d",d);
    return 0;
}
