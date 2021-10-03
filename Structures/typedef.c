#include<stdio.h>
#include<string.h>

typedef struct employ   //typedef give us the convinience to create 
                        // our own datatype "emp"
{
    char name[15];    
    int code;           // we can use both (struct employ) or (emp) as datatypes
    float salary;       // but emp is easy to type, and gives the code a clean look
                        // and readability
}emp; //---> emp is our own  created datatype

void show(emp emp1);    //function decleration

int main()
{

    emp e1;              // e1 is a variable of emp datatype 
    emp *ptr;            // ptr is pointer of emp datatype

    ptr = &e1;           // pointer ptr points to e1 variable

   // (*ptr).code =100;  // giving value to code
   // above line can be written as below
  
   ptr->code =100;       // passing value through pointers
   ptr->salary =1000.8;
   strcpy(ptr->name, "krishnendu");


   printf("salary is :%f\n", e1.salary);   // print the value of salary


   show(e1);             // calling the fuction



    
    return 0;
}
void show(emp emp1)  //function defination
{
    printf("The name of employ is : %s\n", emp1.name);
    printf("The name of employ is : %f\n", emp1.salary);
    printf("The name of employ is : %d\n", emp1.code);
    

}
