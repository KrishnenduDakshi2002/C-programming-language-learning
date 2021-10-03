#include<stdio.h>
#include<string.h>

int main()
{
    int a,j;
    for(int i=1;i<=5;i++) //for number of lines
    {
        for(int j=1;j<=5-i;j++)  // for first part
        {
            printf(" ");
        }
        a=i;
        for(int j=0;j<i;j++) //for second part
        {
            printf("%d",a++);
            
        }
        a=a-2;

        for(int j=2;j<=i;j++)

        {
            printf("%d",a--);

        }
        printf("\n");
    }
    return 0;
}