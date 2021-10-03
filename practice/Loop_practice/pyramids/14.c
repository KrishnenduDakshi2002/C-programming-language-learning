//       1 
//      1  2 
//     1  2  3 
//    1  2  3  4 
//   1  2  3  4  5 
//  1  2  3  4  5  6 




#include <stdio.h>
#include <string.h>

int main()
{
    int num;
   int n; 
   printf("enter n  ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)  // loop for number of lines
   {
       for(int j=1;j<=n-i;j++) // loop for printing spaces
       {
            printf(" ");// to understand the process
       }
       for(int j=1;j<=i;j++) // loop for printing star
       {
           printf(" %d ",j);
       }
       printf("\n");      // prints next line 
   }
    return 0;
}