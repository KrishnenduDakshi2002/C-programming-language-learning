#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp =='w')
    {
        return 1;
    }
    else if (you=='w' && comp =='s')
    {
        return -1;
    }
    if(you=='s' && comp =='g')
    {
        return -1;
    }
    else if (you=='g' && comp =='s')
    {
        return 1;
    }
    if(you=='w' && comp =='g')
    {
        return 1;
    }
    else if (you=='g' && comp =='w')
    {
        return -1;
    }
    if(you=='w' && comp =='s')
    {
        return -1;
    }
    else if (you=='s' && comp =='w')
    {
        return 1;
    }
    if(you=='g' && comp =='w')
    {
        return -1;
    }
    else if (you=='w' && comp =='g')
    {
        return 1;
    }
    if(you=='g' && comp =='s')
    {
        return 1;
    }
    else if (you=='s' && comp =='g')
    {
        return -1;
    }
}

int main()
{
    int number;
    char you,comp;
    srand(time(0));
    number =rand()%100 + 1;
    
    if (number<33)
    {
        comp='s';
    }
    else if( number>=33 && number<66)
    {
        comp='g';

    }
    else
    {
        comp='w';
    }
    


    printf("Enter 's'for snake, 'w'for water , 'g' for gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    if(result==0)
    {
        printf("draw!!");
    }
    else if(result==1)
    {
        printf("WON!!");

    }
    else{
        printf("Lose!!");

    }
    return 0;
}