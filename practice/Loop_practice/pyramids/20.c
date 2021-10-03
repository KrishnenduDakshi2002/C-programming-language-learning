
//  5 6 7 8 9 8 7 6 5
//   4 5 6 7 6 5 4
//    3 4 5 4 3
//     2 3 2
//      1


#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    for( int i=5;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++) //first part
        {
            printf(" ");
        }
        a =i;
        for(int j=1;j<=i-1;j++)
        {
            printf("%2d", a++);
        }
        //printf("\\%d\\",a); //if you want to see what are outputs of a
        for(int j=1;j<=i;j++)
        {
            printf("%2d", a--);
        }
        
        printf("\n");
    }
    return 0;
}