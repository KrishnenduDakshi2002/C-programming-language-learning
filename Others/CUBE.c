#include <stdio.h>

int main()
{

    int input, _cube, num;

    for (num = 1; num <= 3; num++)
    {
        printf("Inputs from user: \n");
        scanf("%d", &input);

        _cube = input * input * input;
        printf(

            "Cube is: %d \n", _cube);
    }

    return 0;
}