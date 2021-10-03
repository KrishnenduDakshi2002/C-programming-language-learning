#include<stdio.h>
#include<string.h>
void presence(char *ptr, char c)
{
    int num;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            num = 1; //dummy value 
        }            // if the 'if' statement is true then num=1,otherwise not
        
        ptr++;
    }
    if(num==1){      // if the previous 'if' statement is true then num has 1
        printf("character is present \n");// then it will print present statement.
    }
    else{
        printf("  character is not present \n");


    }

}

int main()
{
    char str[]= "mangoi";
    presence(str,'i');
    return 0;
}