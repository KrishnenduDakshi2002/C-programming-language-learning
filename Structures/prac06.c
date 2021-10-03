#include <stdio.h>
#include <string.h>
typedef struct complex
{ // sturcture

    int real;
    int imaginary;

} comp;
void inputs(comp *Arr) // function for inputs to the arraimaginary
{
    for (int i = 0; i < 5; i++)
    {
        
        printf("\n\n");
        printf("Enter the value for  %d complex number \n ", i + 1);
        printf("real dimension:");
        scanf("%d", &Arr[i].real);
        printf(" imaginary dimension:");
        scanf("%d", &Arr[i].imaginary);
    }
}
void diaplay(comp c)
{
    
    printf("real part is %d\n", c.real);
    printf("imaginary part is %d\n", c.imaginary);

    

    
}
int main()
{
    comp arr[5];
    comp *ptr = arr;
    inputs(ptr);
    for (int i =0; i<5; i++)
    {
        printf("Values for %d complex number\n", i+1);
        diaplay(arr[i]);
    }
    return 0;
}