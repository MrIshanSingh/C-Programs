#include<stdio.h>
int main()
{
    int a=10,b=3,c;
    c=a&b; //Bitwise AND
    printf("\n%d",c);
    c=a|b; //Bitwise inclusive OR
    printf("\n%d",c);
    c=a^b; //Bitwise exclusive OR (If two values are same it returns 0 else 1)
    printf("\n%d",c);
    c=~a;
    printf("\n%d",c);
    c=~b;
    printf("\n%d",c);
    c=a<<b;
    printf("\n%d",c);
    c=a>>b;
    return 0;
}
