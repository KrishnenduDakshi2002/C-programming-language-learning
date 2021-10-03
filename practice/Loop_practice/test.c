#include<stdio.h>
#include<string.h>

int main()
{
    long x,y,z;
    int n;
    x=0;
    y=1;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        z=x+y;
        printf("%ld",z);
        x=y;
        y=z;
    }
    return 0;
}