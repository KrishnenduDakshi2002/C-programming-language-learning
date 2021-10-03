#include <stdio.h>
void printArray(int *ptr, int n){
    for (int i=0; i<n; i++){
          printf(" The value of elements %d is %d \n", i+1, *(ptr+i));
    }           // here (ptr+1)--> has the address of 2 elelment
                //      (ptr+2)--> has the address of 3 elelment
                //      (ptr+3)--> has the address of 4 elelment, so on.
                // *(ptr+i)--> by * we are just printing the values at their addresses

                 
}
int main()
{
 int array[]={2,2,24,45,6,6,69};
 printArray( array,7 );
    return 0;
}