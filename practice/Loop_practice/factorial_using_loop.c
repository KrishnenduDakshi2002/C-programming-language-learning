#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    long fact = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("no factorial for negative values");
    }
    else
    {
        while (num > 1)
        {
            fact=fact * num;
            num--;
            printf("%ld\n",fact);
        }
        printf("factorial is : %ld", fact);
    }
    return 0;
}