#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,mul;
    a=10;
    b=12;
    mul=0;
    for(int i=0;i<a;i++)
    {
        mul=mul+b;
    }
    printf("%d",mul);
    return 0;
}