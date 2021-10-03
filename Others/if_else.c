#include <stdio.h>

int main()
{
    int age;
    char DL;


    printf("Age: \n");
    scanf("%d", &age);

    printf("do you have driving_license: \n");
    scanf("%c", &DL);

    if((age>=18 && age <=70) || DL=='y'){
        printf("you can drive, you have driving license");
    }
    else if ((age<18) && DL=='y'){
        printf("you can't drive although you have driving license, you aren't aged yet!");

    }
    else if ((age>=18 && age <=70) && DL=='n'){
        printf("you can't drive , you are aged,but you don't have driving license!");

    }



        return 0;
}