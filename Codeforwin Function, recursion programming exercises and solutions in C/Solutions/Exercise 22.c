#include <stdio.h>
unsigned int display_Array(unsigned int *ptr,unsigned short int length);
int main()
{
    unsigned int user_Number[9] = {11,22,33,44,55,66,77,88,99};
    display_Array(user_Number,9);
    return 0;
}
unsigned int display_Array(unsigned int *ptr,unsigned short int length)
{
    if(length == 0)
    {
        return 0;
    }
    else
    {
        printf("%i\t",*ptr);
        display_Array(++ptr,--length);
    }

}
