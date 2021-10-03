#include<stdio.h>
int strlen(char *ptr)
{
    int len=0;
    while(*ptr!='\0')
    {
       len++;
       ptr++;
    }
    return len;

}

int main()
{
    char str[15]="krishnendu";
    int l =strlen(str);
    printf("The length of this string is %d",l);


    return 0;
}