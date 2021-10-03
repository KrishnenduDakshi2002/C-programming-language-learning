#include<stdio.h>
void passValue(int *a,int *b);
int main(){

    int x = 2;
    int y = 10*x;  // here it is clear that the value of y is 20. although we didn't mention it
    
    passValue(&x, &y); // here it takes the addresses of x and y
    printf(" The convertered value will be \n %d \n ", x);

    return 0;
}
void passValue(int *a, int *b ){   // int *a, int *b are integer type pointers, which will store the adresses of x and y.
  int temp;                        // here allocated an integer type variable which will store temporary value 
  temp = *a;                       // here we assign the value which is present in the *a to temp
  *a =*b;                          // here actually values of x and y will become same =20
  *b = temp;                       /* here *b will opt the value in the temp variable
  
we can change the value of any variable in the main fn if their addresses are given 

     In Call by value :  we actually get a copy of the values of the variables in the main function
    not the the original copy */
                      
}

