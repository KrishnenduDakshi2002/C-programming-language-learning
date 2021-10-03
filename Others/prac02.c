#include<stdio.h>

int main(){
  int a =1;
  int sum =0;
  int b;
  printf ( "Num of integers: \n");
  scanf("%d", &b);


  while(a<=b){
      sum =sum +a;
      a++;
  }

  printf(" sum is :%d\n", sum);
    return 0;
}