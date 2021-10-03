#include<stdio.h>

int main()
{
    char str[34]; // input string should be less than 34 characters
    printf("Enter your name : \n");// for multiword strings  use gets(), puts()
    scanf("%s", str);
    printf("Name is: %s\n",str);
    return 0;
}