#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Dummy.txt","r");
    char c = fgetc(ptr); //statrs with the first character 't'
    printf("\n\n");      
    while(c!=EOF)        // then check for this condition whether it is EOF or not
                         //if not then it will pass through the instructions
    {
       
        printf("%c",c);  //here it will print the character 't'
        c = fgetc(ptr);  //here it will take the next character from the file 
                         //again goto the while loop and check for the condition
                         // if the character loaded into the loop is not EOF then
                         // then it will excute those two lines again.
   }  
   fclose(ptr);          

    return 0;
}