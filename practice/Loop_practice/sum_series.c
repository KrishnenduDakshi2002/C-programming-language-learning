#include<stdio.h>
#include<string.h>

int main()
{
    int initial,num,sum;
    initial=1;
    sum=0;
    printf("Enter number :");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum=sum+initial;
        initial=initial+i;
    }
    printf("%d",sum);
    return 0;
}