#include <stdio.h>

int main()
{
    int i = 34; // in my macbook ar chitecture integer is 4 bytes, character is 1 bytes, float is 4 bytes
    int *ptr = &i;
    printf(" The value of ptr is : %u \n", ptr); // print the value of ptr
    ptr++;

    ptr = ptr + 2; // ptr++ --> ptr= ptr +1;
                   // here for (+1) it will add 4(bytes(integer))
                   // but for (+2 ) it will add 8(bytes(integer))
                   // same for (+3) it will add 12(bytes(integers))
                   // but for characters (+1) it will add 1(bytes(characters))
    printf(" The value of ptr is : %u \n", ptr);

    return 0;
}