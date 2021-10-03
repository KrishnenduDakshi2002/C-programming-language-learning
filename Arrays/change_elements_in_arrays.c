#include <stdio.h>
void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" The value of elements %d is %d \n", i + 1, *(ptr + i));
    }                           
   
   
    *ptr= 1000;      // here we changed the value of the first element of the array from the function
                     // because it has that power
    *(ptr+2) = 2002; // changed the value of third element of the array                  

}
int main()
{
    int array[] = {2, 2, 24, 45, 6, 6, 69};
    printArray(array, 7);
    printf(" After changing the value of array's 0th element :%d \n", array[0]);
    printf(" After changing the value of array's 3rd element :%d \n", array[2]);

    return 0;
}