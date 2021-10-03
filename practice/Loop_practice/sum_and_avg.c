#include<stdio.h>
#include<string.h>

int main()
{
    int i=0, sum=0; float avg;
    printf("Enter 10 numbers :\n");
    while(i<=10)
    {
        int n;
        printf("Enter number is %d :",i);
        scanf("%d",&n);
        if(n<0 ){
            printf("enter only positive number!!\n");
            continue;

        }
        sum=sum+n;
        i++;
    }
    avg = (float)sum/10;
    printf("Sum and avg is : %d , %f",sum,avg);
    return 0;
}   