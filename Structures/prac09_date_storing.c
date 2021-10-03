#include<stdio.h>
#include<string.h>
typedef struct date
{
   int day;
   int month;
   int year;
}date;
void display(date d)
{
    printf("Date is : %d/%d/%d \n",d.day,d.month,d.year);
}
int compareDate(date d1,date d2)
{ 
    //make decision on the basis of year comparison
    if(d1.year> d2.year)
    {
        return 1;
    }
    if(d1.year< d2.year)
    {
        return -1;
    }
    //make decision on the basis of month comparison

    if(d1.month> d2.month)
    {
        return 1;
    }
    if(d1.month< d2.month)
    {
        return -1;
    }
    //make decision on the basis of day comparison

    if(d1.day> d2.day)
    {
        return 1;
    }
    if(d1.day< d2.day)
    {
        return -1; 
    }
    return 0;

}

int main()
{
    date d1={1,1,2002};
    date d2={9,2,2003};

    display(d1);
    display(d2);
    int a = compareDate(d1,d2);
    printf("Dare comaprison function returns: %d", a);
    
    return 0;
}