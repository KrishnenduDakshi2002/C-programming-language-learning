#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf(" Num1: \n");
    scanf("%d", &num1);

    printf(" Num2: \n");
    scanf("%d", &num2);

    printf(" Num3: \n");
    scanf("%d", &num3);

    printf(" Num4: \n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf(" Greatest number is %d \n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf(" Greatest number is %d \n", num2);
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf(" Greatest number is %d \n", num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf(" Greatest number is %d \n", num4);
    }

    return 0;
}