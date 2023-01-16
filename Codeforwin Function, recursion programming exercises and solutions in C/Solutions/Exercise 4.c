#include <stdio.h>

unsigned int Even_Odd(unsigned int numberOne);

int main()
{
    unsigned int UserNo = 0;
    printf("please enter a number:\n");
    scanf("%i",&UserNo);
    Even_Odd(UserNo);
    return 0;
}

unsigned int Even_Odd(unsigned int numberOne)
{

    if(0 == (numberOne % 2))
    {
        printf("number %i is EVEN",numberOne);
    }
    else
    {
        printf("number %i is ODD",numberOne);
    }
    return 1 ;
}

