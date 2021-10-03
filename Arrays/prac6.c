#include <stdio.h>
void count(int *arr, int n)
{
  
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=0)
       {  
         printf("positive \n");
         printf("%d \n", arr[i]);
    


       }
       else
       {
           printf("Negative \n");
       }
   }
}

int main()
{
  int arr[10];
  for (int i=0;i<4; i++)
  {
     arr[i]= (2*i)+5; 
  }
  for (int i=4;i<10; i++)
  {
     arr[i]= i-10;
  }
  for (int i=0;i<10; i++)
  {
     printf("value of element %d in array is: %d \n", i+1, arr[i]);
  }
  count(arr, 10);
    return 0;
}