#include <stdio.h>

int sum(int a, int b);

int main()
{

    int c;
        c = sum(2, 4);
    printf(" Sum  is : %d", c);

    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
