#include<stdio.h>
#include<string.h>

int main()
{
    int a, mul;
    FILE *ptr;
    ptr = fopen("krish.txt", "r");
    fscanf(ptr,"%d", &a);
    fclose(ptr);
    printf("MUltiplication table of %d is --->\n", a);
    for(int i=0; i<10;i++)
    {
        printf(" 5 X %d : %d \n", i+1, 5*(i+1));
    }

    return 0;
}