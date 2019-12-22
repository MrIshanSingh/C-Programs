#include<stdio.h>
int main()
{
    int a=0,b=3,c;
    c=a&&b; //this is (&&) logical AND
    printf("%d",c);
    c=a||b; //This is (||) logical OR
    printf("%d",c);
    c=!a;
    printf("%d",c);
    c=!b;
    printf("%d",c);
    return 0;
}
