#include<stdio.h>
void slice(char *ptr, int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
       ptr[i]=ptr[i+m];
       i++;
    }
    ptr[i]='\0';
    
    
}

int main()
{
    char str1[]="krishnenduDakhshi";
    printf("%c\n",str1[1]);
    
    slice(str1,3,10);
    printf("%s\n",str1);
    return 0;
}