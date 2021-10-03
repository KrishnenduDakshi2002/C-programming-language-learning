#include <stdio.h>
float gravity(int mass);

int main()
{
    float  c;
    // printf(" Mass of the body is : %f", mass);
    // scanf("%f", &mass);
    c = gravity(10);
    printf(" Force of attraction is : %f \n", c);

    return 0;
}

float gravity(int mass)
{
    float force_of_attraction = mass * 9.8;

    return force_of_attraction;
}