#include<stdio.h>

int main(){
    char str[]=" Krishnendu"; // can be written as char str[]={'k','r','i','s','h','n','e','n','d','u','\0'};
    char *ptr  =str;          // here \0 represents termination of string.
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}