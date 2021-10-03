#include<stdio.h>
int occurance_test(char *ptr, char c)
{
     int count =0;
     while(*ptr!='\0')
     {
        if(*ptr==c)
        {
            count++;
        }
        ptr++;
     }
     return count;
}

int main()
{
    char str[]="Appleappy";
    int count = occurance_test(str,'p');
    printf("Count is : %d",count);
    return 0;
}