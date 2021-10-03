#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fputc.txt", "w");
    fputc('c',ptr);
    fclose(ptr);

 //this will write character into the fputc.txt
 

    return 0;
}
