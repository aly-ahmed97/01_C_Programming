#include <stdio.h>

unsigned int Reverse(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    Reverse(UserNo);
    return 0;
}

unsigned int Reverse(unsigned int numberOne)
{
    unsigned int reversed_number = 0 ;
    while(numberOne)
    {
        reversed_number += (numberOne % 10) ;
        numberOne /= 10 ;
        if(numberOne)
        {
            reversed_number *= 10 ;
        }
        else
        {
            //nothing
        }
    }
    printf("the reverse = %i",reversed_number);
    return 1 ;
}

