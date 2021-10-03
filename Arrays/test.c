#include<stdio.h>

int main(){
int a=3;
int b=3;
int array[3][3];

for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {  
        printf("Enter the marks of student %d in subject %d :", i + 1, j + 1);
        scanf("%d", &array[i][j]);
      
    }
}
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {  
       printf("%d", array[i][j]);
       if(j==2){
           printf("\n");
       }
      
    }
}
    return 0;
}