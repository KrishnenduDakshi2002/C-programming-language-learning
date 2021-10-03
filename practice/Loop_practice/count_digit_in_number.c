#include<stdio.h>
#include<string.h>

int main()
{
    int count,num,rem;
    count=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {

        num=num/10;
        count++;
 
    }
    printf("Numbers of digit in the entered number : %d",count);
    return 0;
}