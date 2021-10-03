#include<stdio.h>
#include<string.h>

int main()
{
    for(int i=0;i<5;i++)
    {
      if(i==1)
        { break;  // loop will print until break statement gets true.
           
        } 
        printf("%d\n",i);  
    }
    return 0;
}