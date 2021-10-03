#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Please input the n th number  : \n");
    scanf("%d", &n);
    printf(" Sum of n natural numbers is: %d \n", sum(n));

    return 0;
}
int sum(int n)
{
    int s;
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }
    else{
        s = n + sum(n - 1);

    }
    return s;
}
