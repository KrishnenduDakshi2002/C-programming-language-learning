#include<stdio.h>
#include<string.h>

struct employee    //this define a new user define datatype
{                   // here struct employee is datatype
    int code; 
    float salary;
    char name[20];

};   // ; is important here 

int main()
{
    struct employee facebook[100];          // like int type array,we created a struct employee datatype array.
                                            //created an array named facebook 
    facebook[0].code =100;
    facebook[0].salary = 100.90;
    strcpy(facebook[0].name, "krishnendu"); // we have to use strcpy to store 
                                            // strings in it.
    printf("hello");
    
    return 0;
}