#include <stdio.h>
#include <stdlib.h>

/* calloc stands for continous memory allocation 
   It initializes each memory block with a default value 0

*/

int main()
{
    int *ptr;
 
    ptr = (int *)calloc(6 , sizeof(int));  // here we use ',' instead of '* '
    
    // for (int i = 0; i < 10; i++) 
    // {
    //     printf("Enter value of %d element :", i + 1);
    //     scanf("%d", &ptr[i]);
    // }

    for (int i = 0; i < 10; i++)
    {
        printf("value of %d element  is  : %d \n", i + 1, ptr[i]);
    }

    return 0;
}