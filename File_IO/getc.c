#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Dummy.txt", "r");
   // char c = fgetc(ptr);
    printf("The value of my character is %c\n", fgetc(ptr)); //this will print all the character in the dummy.txt
    printf("The value of my character is %c\n", fgetc(ptr)); //one by one 

    printf("The value of my character is %c\n", fgetc(ptr));

    printf("The value of my character is %c\n", fgetc(ptr));

    printf("The value of my character is %c\n", fgetc(ptr));

    return 0;
}
