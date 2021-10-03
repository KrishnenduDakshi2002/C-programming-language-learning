#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c;
    FILE *ptr;
    ptr = fopen("krish.txt", "r");
    fscanf(ptr,"%d %d %d", &a, &b,&c );
    printf("The value of a,b,c are : %d %d %d", a,b,c);
    return 0;
}