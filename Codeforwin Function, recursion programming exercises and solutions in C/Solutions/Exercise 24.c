#include <stdio.h>
unsigned int Max_Array(unsigned int *ptr,unsigned short int length,unsigned int number);
int main()
{
    unsigned int user_Number[9] = {11,22,33,44,55,606,77,88,99};
    unsigned int result = 0 ;
    result = Max_Array(user_Number,9,user_Number[0]);
    printf("Max = %i",result);
    return 0;
}
unsigned int Max_Array(unsigned int *ptr,unsigned short int length,unsigned int number)
{
    if(length == 0)
    {
        return number;
    }
    else
    {
        if(number < *ptr)
        {
            number = *ptr ;
        }
        else
        {
            //nothing
        }
        return Max_Array(++ptr,--length,number);
    }
}

