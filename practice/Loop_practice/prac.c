#include<stdio.h>
#include<string.h>

int main()
{
    int num,sum,rem,n;
    sum=0;
    printf("Enter number :");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        sum =sum+rem;

        num=num/10;


    }
    printf("%d",sum);
    return 0;
}