#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    ptr =  fopen("Dummy.txt", "r");
    ptr1 = fopen("Results.txt","w");
    char c = fgetc(ptr);
    while(c!=EOF)
   {
       fputc(c,ptr1);
       fputc(c,ptr1);
       c = fgetc(ptr);
   }
   fclose(ptr);
   fclose(ptr1);
   

    return 0;
}