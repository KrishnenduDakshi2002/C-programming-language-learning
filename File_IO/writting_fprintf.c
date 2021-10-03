#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    int num=34;

    ptr = fopen("WrittingDummy.txt", "w");
    fprintf(ptr,"The number is %d", num); //fprintf helps to write into a program
    fclose(ptr);
    return 0;       // Dummy.txt is the written program 
}