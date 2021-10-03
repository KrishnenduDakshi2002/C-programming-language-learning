#include <stdio.h>
int series(int n);

int main()
{

    int c;
    printf(" nth number :");
    scanf("%d", &c);
    printf(" Value of the nth number in the fibonacci series: %d \n", series(c));

    return 0;
}
int series(int n)
{
    int num;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        num = series(n - 1) + series(n - 2);
    }
    return num;
}
