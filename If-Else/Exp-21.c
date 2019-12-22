#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
        printf("Alphabet is lowercase");
    else if(ch>=65&&ch<=90)
        printf("Alphabet is uppercase");
    return 0;
}
