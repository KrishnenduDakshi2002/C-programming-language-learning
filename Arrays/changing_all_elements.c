#include<stdio.h>
void changeElements(int *ptr,int n)
{
    for(int i=0; i<n; i++)
    {   
        // printf(" Current values of [%d] is: %d \n", i+1, *(ptr+i));
        
        printf(" Changed values of [%d] :", i+1);
        scanf("%d", *(ptr+i));
        // printf("values after changing of  element [%d] is: %d \n ", i+1, *(ptr+i));

    }
}
int main(){

    int array[]={1,5,6,7};
    changeElements(array,4);

    return 0;
}