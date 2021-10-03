//  1 2 3 4 5 6 7 8 9
//    1 2 3 4 5 6 7
//     1 2 3 4 5
//      1 2 3
//       1



#include<stdio.h>
#include<string.h>

int main()
{
     for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++) //first part
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf(" %d",j);
        }
        printf("\n ");
    }
    return 0;
}
