//   1
//   2  3
//   4  5  6
//   7  8  9 10
//  11 12 13 14 15




#include<stdio.h>
#include<string.h>

int main()

{
        int num=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
        
            
            printf("%3d",num);
            num++;
            

        }
        printf("\n");
    }
    return 0;
}