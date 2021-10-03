#include <stdio.h>

int main()
{
    int INT;
    
    printf(
        "value of interger : \n");
    scanf("%d", &INT);
    char a;

    printf(" value of a \n");
    scanf("%c", &a);

    if (a == 'y')
    {
        printf("you are fine");
    }

    else if (a == 'n')
    {
        printf(" not perfect");
    }

    return 0;
}