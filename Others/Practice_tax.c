#include <stdio.h>

int main()
{
    float salary;
    float per_tax;
    float tax;
    tax = salary * per_tax / 100;

    printf("your salary per annum (lakh) : \n");
    scanf("%f", &salary);

    if (salary >250000 && salary< 300000)
    {
        tax = tax + (salary-250000)* 0.05;
    }
    else if (salary >= 300000 && salary < 400000)
    {
 
      tax =(salary-300000)* 0.1;

    }

    printf(" have to pay in the month end  %f \n", tax);

    return 0;
}