#include <stdio.h>

void print(int ** val){
    printf("%d",**val);
}

int main()
{
    char * exp = "abcdef";
    for(int i=0;exp[i];i++)
    {
        printf("%c ",exp[i]);
    }
    return 0;
}