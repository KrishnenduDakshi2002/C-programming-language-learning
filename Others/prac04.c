#include <stdio.h>

int main()
{

    int num_in, sum, inputs;
    float avg;
    sum = 0;
    printf(" Put the numbers : \n");

        for (num_in = 1; num_in <= 3; num_in++)
    {
        scanf("%d",& inputs);
        sum = sum + inputs;

    }
    avg = sum/ 3.0;
    printf(" sum of 10 numbers is %d \n Avg is : %f \n",sum, avg);
    return 0;
}