#include<stdio.h>

int main(){
   int mul[10];
   for(int i; i<10;i++)
   {
       mul[i]= 5*(i+1);
   }
   for(int i; i<10;i++)
   {
       printf(" 5 X %d = %d \n", i+1, mul[i]);
   }
   
   
    return 0;
}