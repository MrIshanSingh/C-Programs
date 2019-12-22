#include<stdio.h>
int main()
{ char A;
    printf("%c",-(~'A')); //ASCII Code of A=65 and in negation -> -(65+1) and -(-66)=66 and this is equal to ASCII CODE OF B
    return 0;
}
