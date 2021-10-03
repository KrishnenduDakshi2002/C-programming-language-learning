#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;      //FILE is a structure
                    //File pointer is needed for communication betweeen the file and the write
    int num1;
    int num2; 
    ptr = fopen("krish.txt", "r");  // fopen is a function that opens files, it will open that .txt file
                                    // beside that "r" is mode ---> read, there are many modes like read("r")
    fscanf(ptr, "%d",&num1);   // fscanf will took input from the .txt file 
                               // num1 for first integer in that file  
    fscanf(ptr, "%d",&num2);   // num2 for second integer in that file 
    fclose(ptr);               // fclose is a function which will close that file
                               // it is a good habit to close that file when it is not needed 
                               //unless it will take resources
    printf("The value of num1 is: %d\n",num1);
    printf("The value of num2 is: %d\n",num2);



    return 0;
}