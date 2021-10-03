#include <stdio.h>

int main()
{
    int num_input, input, sum;
    num_input = 1;
    float avg;
    sum = 0;
    
    while (num_input <= 5)
    {

        printf(" Input: \n");
        scanf(" %d", &input);
        sum = sum + input;

        num_input++;
    }
    printf(

        "Sum is : %d\n", sum);
    avg = sum/5;
    printf(

        "avg is %f \n", avg);

    return 0;
}