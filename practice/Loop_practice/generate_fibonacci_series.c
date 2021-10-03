#include<stdio.h>
#include<string.h>

int main()
{
    int initial,n,num,z;
    initial=0;
    num=1;
    printf("Enter number :");
    scanf("%d\n",&n);
    printf("Fibonacci series is:");
    for(int i=1;i<n;i++)
    {
        z =num+initial;
        printf("%d",z);
        initial=num;
        num=z;


    }
    

    return 0;
}