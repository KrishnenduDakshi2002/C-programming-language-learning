#include <stdio.h>
int test(int a);

int main()
{
    int c;
    int num;
    printf(" Put the value of num : ");
    scanf("%d", &num);
    c = test(num);
    printf(" Value is : %d ", c);

    return 0;
}
int test(int a)
{
    int c = a * 2;
    return c;
}
