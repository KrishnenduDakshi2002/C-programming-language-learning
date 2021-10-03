#include<stdio.h>
#include<string.h>

struct employ
{
    char name[15];
    int code;
    float salary;
};

void show(struct employ emp);     //function decleration

int main()

{
    struct employ e1;     // e1 is a variable of struct employ datatype 
    struct employ *ptr;   // ptr is pointer of struct employ datatype

    ptr = &e1;            // pointer ptr points to e1 variable

   // (*ptr).code =100;   // giving value to code
   // above line can be written as below
  
   ptr->code =100;        // passing value through pointers
   ptr->salary =1000.8;
   strcpy(ptr->name, "krishnendu");


   printf("salary is :%f\n", e1.salary);   // print the value of salary


   show(e1);              // calling the fuction



    
    return 0;
}
void show(struct employ emp)  //function defination
{
    printf("The name of employ is : %s\n", emp.name);
    printf("The name of employ is : %f\n", emp.salary);
    printf("The name of employ is : %d\n", emp.code);
    

}
