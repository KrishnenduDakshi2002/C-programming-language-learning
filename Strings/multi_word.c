#include<stdio.h>

int main()
{
    char str[34]; // input string should be less than 34 characters
    printf("Enter your name : ");// for multiword strings  use gets(), puts()
    gets(str);     // takes multi line strings
    puts(str);     // print string in the new line
    printf("Name is: %s\n",str);
    return 0;
}