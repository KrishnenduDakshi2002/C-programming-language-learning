#include <stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;           // here *sum  ==> value of sum(not any pointer)
                            // if any value is assinged in *sum, that will change the value of sum variable in the main fn.
    *avg = (float)*sum / 2; // where (float ) is callled typecast,
}                          // makes the integer type to float type.
int main()

{

    int i, j, sum;                                   // here we are returning values from a void function
    float avg;                                       //indirectly, how ???
                                                     // we are giving SumAndAvg function i,j and addresses of
    i = 2;                                           // sum and avg, by which the function can change those
    j = 7;                                           // values in main fn of sum and avg by it's own, through
    SumAndAvg(i, j, &sum, &avg);                     // the value of i and j, and the fn will calculate
    printf("The value of sum is : %d \n", sum);      // the sum and avg in the function defination
    printf("The value of average is : %f \n ", avg); // then through the addresses of sum and avg it will
                                                     // change the value of sum and avg in main function.

    return 0;
}