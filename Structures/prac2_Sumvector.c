#include <stdio.h>
#include <string.h>

typedef struct vector //structure
{
    int x;
    int y;
} vec;

vec SumVector(vec v1, vec v2) //function
{
    vec results;
    results.x = v1.x + v2.x;
    results.y = v1.y + v2.y;

    return results;
}

int main()
{
    vec v1, v2;
    v1.x = 2;
    v1.y = 3;

    v2.x = 5;
    v2.y = 7;

    vec sum = SumVector(v1, v2);
    printf("Sum of two vectors :X dimension is %d and Y dimension is %d \n", sum.x,sum.y);
    return 0;
}