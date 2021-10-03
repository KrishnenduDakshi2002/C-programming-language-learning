// Sometimes the dynamically allocated memory is 
// insufficiant or more than required 
// if we use realloc, we can rallocate dynamic memory

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr;
    ptr = (int*)malloc(6 * sizeof(int));
    
    for(int i=0; i<6 ;i++)    
    {
        printf("Enter value of %d element :", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6 ;i++)
    {
        printf("value of %d element  is  : %d \n", i+1,ptr[i]);
        
    }

    
    //realloc  ptr using relloc()

    printf("\n\n");
    printf("Reallocation is linitiating....\n");

    ptr = realloc(ptr, 10* sizeof(int));  //--> now ptr is reallocated
    for(int i=0; i<10 ;i++)    
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