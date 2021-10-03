#include <stdio.h>
#include <string.h>

int main()
{
    int salary[2];
    char name1[20];
    char name2[20];

    printf("Name of employ 1 : ");
    scanf("%s", name1);
    printf("Salary of  %s : ", name1);
    scanf("%d", &salary[0]);

    printf("Name of employ 2 : ");
    scanf("%s", name2);
    printf("Salary of  %s : ", name2);
    scanf("%d", &salary[1]);

    FILE *ptr;
    char comma = ',';
    ptr = fopen("EmployData.txt", "w");
    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%c", comma);
    fprintf(ptr, "%d\n", salary[0]);

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%c", comma);
    fprintf(ptr, "%d", salary[1]);

    return 0;
}