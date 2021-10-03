#include<stdio.h>
void encrypt(char *str)
{
    while(*str!='\0')
    {
        *str =*str +1;
        str++;
    }

}

int main()
{
    char str[]="krishnendu";
    encrypt(str);
    printf("Encrypted user id is : %s \n ",str);
    return 0;
}