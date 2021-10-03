//      1
//     2 2
//    3 3 3
//   4 4 4 4
//  5 5 5 5 5





#include<stdio.h>
#include<string.h>

int main()
{
    int num =1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            
            printf(" %d",num);
        }
        num++;
        printf("\n");

    }
    return 0;
}