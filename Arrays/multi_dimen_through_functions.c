#include <stdio.h>
void display_array_elements(int a, int b, int *arr)
{
    for (int i = 0; i < a; i++)
        
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter the marks of student %d in subject %d : \n", i + 1, j + 1);
                scanf("%d", arr);
            }
        }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" the marks of student %d in subject %d : is %d \n", i + 1, j + 1, *arr);
        }
    }

}

int main()
{
    int n_numbers = 3;
    int n_subjects = 2;
    int marks[3][2];
    display_array_elements(n_numbers, n_subjects, &marks);
      return 0;
 }