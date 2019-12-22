#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter marks of five subjects (out of 100):");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5.0;
    if(per>=60)
        printf("Result: First Division");
    else
    {
        if(per>=50)
                printf("Result: Second Division");
        else
        {
           if(per>=40)
                printf("Result: Third Division");
           else
                    printf("Result: Fail");
    }
    }
    printf("Percentage: %f",per);
    return 0;
}


