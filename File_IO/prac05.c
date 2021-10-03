#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ModifyValue.txt","r");
    int num; 
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("Integer present in the file is :%d",num);
    ptr = fopen("ModifyValue.txt","w");
    int num1= num*2;
    fprintf(ptr,"%d",num1);
    
    return 0;
}