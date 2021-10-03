#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("0");
            }
            else {
                printf("1");


            }

        }
        printf("\n");
    }
   
    
    return 0;
}