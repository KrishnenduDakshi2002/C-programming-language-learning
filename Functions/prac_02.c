#include <stdio.h>
int test(int a, int b);

int main()
{
    int c;
    int a, b;
    printf(" value of a is : \n");
    scanf("%d ", &a);
    printf(" value of b is : \n");
    scanf("%d ", &b);
    c = test(a,b);
    printf(" Sum is : %d \n ", c);

    return 0;
}
int test(int a, int b)
{
    int c;
    c = a + b;
    printf(" Value of C is : %d \n", c);
    return c;
}
