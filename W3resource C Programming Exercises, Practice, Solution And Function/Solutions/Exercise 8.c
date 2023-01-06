#include <stdio.h>
unsigned int Largest_Number(const unsigned int arr[],const unsigned int size);
int main()
{
    unsigned int numberOne[] = {11,99,22,81,33,88,404,77,55,66};
    Largest_Number(numberOne,10);
    return 0;
}
unsigned int Largest_Number(const unsigned int arr[],const unsigned int size)
{
    unsigned int index = 0 ;
    unsigned int largest = arr[0];
    for(index = 1 ; index < size ; index++)
    {
        if(arr[index] > largest)
        {
            largest = arr[index];
        }
        else
        {
            //nothing
        }
    }
    printf("the largest number is %i",largest);
    return 1;
}
