  #include<stdio.h>
#include<string.h>

int main()

{
    int a,b;
    a=b=1;
    printf("For loop....\n");
    for(int i=0;i<5;i++)
    {
      if(i==1)
        { continue;  // only 1 will not print in the output
           
        } 
        printf("%d\n",i);  
    }
    printf("while loop....\n");
    while(a<=5)
    {
       if(a==3)
       {
           continue;
       }
        printf("%d\n",a); 
        a++; 
    }
    return 0;
}    