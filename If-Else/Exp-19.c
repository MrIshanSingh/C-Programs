#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    printf("Enter an alphabet");
    scanf("%c",&ch);
    ch1=tolower(ch);
    if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
        printf("%c is a vowel",ch1);
    else
        printf("%c is a consonant",ch);

    return 0;
}
