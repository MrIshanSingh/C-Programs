#include<stdio.h>
int main()
{
    int i,hr,otp;
    i=1;
    while(i<=10)
    {
        printf("\nEnter the hr worked by the employee");
        scanf("%d",&hr);
        if(hr>40)
        {
            otp=(hr-40)*12;
            printf("\nOvertime pay for employee %d is %d",i,otp);

        }
        else
            printf("No overtime pay given");
        i++;
    }
    return 0;
}
