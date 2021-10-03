#include<stdio.h>
#include<string.h>

int main()
{
    int num,period,rem;
    period=1;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        period=period*rem;
        num =num/10;
    }
    printf("result is :%d", period);
    return 0;
}