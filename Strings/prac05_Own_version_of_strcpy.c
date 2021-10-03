#include<stdio.h>
void ownVersion_strcpy(char *ptr1, char *ptr2)
{
    int i=0;
    while(*ptr1!='\0')
    {
        ptr2[i]=ptr1[i];
        i++;

    }
    
}

int main()
{
    char source[]="krishnendu";
    char target[30];
    ownVersion_strcpy(source,target);
    printf("Now target is: %s", target);
    return 0;
}