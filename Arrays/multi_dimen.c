#include <stdio.h>

int main()
{
   int n_students =3;
   int n_subjects =4;
   int marks[3][4];  // first []--> rows, second []-->columns
   for(int i =0; i<n_students; i++){
       for(int j=0; j< n_subjects; j++){
           printf("Enter the marks of student %d in subject %d : \n", i+1, j+1);
           scanf("%d", &marks[i][j]);
       }   // HOW THIS FOR LOOP ACTUALLY WORKS
           //for i=0,i<3 it enters the first loop, then
           //   i=0--->   j=0 
           //      --->   j=1
           //      --->   j=2
           //      --->   j=3
// then it exits the second loop, and return to the first loop with the value 
           //   i=1--->   j=0
           //      --->   j=1
           //      --->   j=2
           //      --->   j=3
// and so on....

}
   for(int i =0; i<n_students; i++){
       for(int j=0; j< n_subjects; j++){
           printf(" the marks of student %d in subject %d : is %d \n", i+1, j+1, marks[i][j]);

       }
   }
   
    return 0;
}