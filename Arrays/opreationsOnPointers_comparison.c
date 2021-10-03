#include <stdio.h>

int main()
{
    int a, b, c;
    int *ptr1;
    int *ptr2;
    int *ptr3 =&c;
    a=1;
    b=2;
    ptr1=&a;
    ptr2=&b;

    printf("value of ptr1 %d \n", ptr1);
    printf("value of ptr2 %d \n", ptr2);
    printf("value of ptr3 %d \n", ptr3);


    if (ptr1> ptr2){
        int c = ptr1-ptr3;   // while subtracting it only gives blocks( 1 block = 4 bytes)
        // 2 blocks = 8 bytes
        
        printf(" ptr1 is greater than ptr2, and the difference is %d \n",c);
    }else{
        printf(" ptr2 is greater than ptr1, and the difference is %d \n", ptr2); 

    }
    return 0;
}