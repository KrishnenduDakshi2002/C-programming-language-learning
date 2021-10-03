#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    //size of operators in my mac
    // we can use %d instead of %lu
    printf("size of integer in my pc is : %lu\n", sizeof(int));
    printf("size of integer in my pc is : %lu\n", sizeof(float));
    printf("size of integer in my pc is : %lu\n", sizeof(char));

    //      ptr = malloc(6 * sizeof(int));      //malloc fucntion gives void pointer, doesn't return
                                                //anyhting.
    ptr = (int*)malloc(6 * sizeof(int));
    //(int*) is type casting to void int type pointer,so now it can give int  type pointer
    // 6 --> spaces for 6 integers, but it can store more than 6 integers.


    //now i can use ptr as array

    for(int i=0; i<10 ;i++)     // here i run this for loop for 10 times, and it store more than 6 integers , 10 integers
    {
        printf("Enter value of %d element :", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<10 ;i++)
    {
        printf("value of %d element  is  : %d \n", i+1,ptr[i]);
        
    }
    return 0;
} 