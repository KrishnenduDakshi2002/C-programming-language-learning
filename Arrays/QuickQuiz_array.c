#include <stdio.h>
void display_array_elements(int a, int b, int *arr)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the number of row %d and column %d : ", i + 1, j + 1);
            scanf("%d",arr);
        }
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0;j<b;j++)
        {
           printf(" the marks of student %d in subject %d : is %d \n",i+1,j+1,*(arr));
           
        }
    }
}

int main()
{
    int n_students = 2;
    int n_subjects = 3;
    int marks[2][3]; 
    display_array_elements(n_students,n_subjects,&marks);
    return 0;
}