#include <stdio.h>
unsigned int Min_Max(const unsigned int arr[],const unsigned int size);
int main()
{
    unsigned int Arr_Numbers[10] ;
    unsigned int index = 0 ;
    printf("please enter 10 numbers separated with space or enters :\n");
    for(index = 0 ; index < 10 ; index++)
    {
        scanf("%i",&Arr_Numbers[index]);
    }
    Min_Max(Arr_Numbers,10);
    return 0;
}

unsigned int Min_Max(const unsigned int arr[],const unsigned int size)
{
    unsigned int index = 0 ;
    unsigned min_number = arr[0];
    unsigned max_number = arr[0];
    for(index = 1 ; index < size ; index++)
    {
        if(arr[index] < min_number)
        {
            min_number = arr[index];
        }
    }
    for(index = 1 ; index < size ; index++)
    {
        if(arr[index] > max_number)
        {
            max_number = arr[index];
        }
    }
    printf("the min. number you entered is %i and the max. number you entered is %i\n",min_number,max_number);
    return 1 ;
}
