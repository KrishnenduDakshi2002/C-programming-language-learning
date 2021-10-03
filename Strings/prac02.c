#include<stdio.h>
#include<string.h>

int main()
{
    char str1[15];
    char str2[15];
    // taking string as input from the user using %s
    printf("Input your string \n");
    scanf("%s",str1);
    printf("%s \n",str1); // we use %s to print strings, but we dont use &(address to operator) 
    
    
    
    //taking string as input from the user by using %c
    int i=0;
    for(int i =0; i<4;i++)
    {   
        printf("Input your character %d :",  i+1);
        scanf("%c \n",&str2[i]);
    }

    printf("%s \n\n",str2);

    printf("%d\n",strlen(str1));
    printf("%d\n",strlen(str2));

    int value = strcmp(
        str1,str2
    );
    printf("%d", value);
    
    return 0;
}