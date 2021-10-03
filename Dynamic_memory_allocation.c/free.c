
// useage of free() in calloc_quiz

// deallocate the memory allocated in malloc or calloc 
//memory allocated using calloc or malloc in not deallocated automatically 


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int *ptr;
 
    ptr = (int *)calloc(n , sizeof(int));  // here we use ',' instead of '*'
    printf("No. of elements You want to store : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
        printf("Enter value of %d element :", i + 1);
        scanf("%d", &ptr[i]);
    }
    free(ptr); //--> it will freeup the memory allocated during calloc
    for (int i = 0; i < n; i++)
    {
        printf("value of %d element  is  : %d \n", i + 1, ptr[i]);
    }

    return 0;
}