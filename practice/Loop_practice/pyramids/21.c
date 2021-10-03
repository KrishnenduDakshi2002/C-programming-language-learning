#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        a=5;
        for(int j=1;j<=i-1;j++)
        {
            printf("%2d",a--);
            
        }
       // printf("\\%d\\",a);  //always check for the output from the previous loop


        for(int j=1;j<=i;j++)
        {
            printf("%2d",a++);
        }
        printf("\n");
    }
    return 0;
}
