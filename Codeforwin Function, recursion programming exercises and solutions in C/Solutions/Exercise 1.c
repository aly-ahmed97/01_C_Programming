#include <stdio.h>

unsigned int cube_number(unsigned int NumberOne);

int main()
{
    unsigned int UserNo = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    cube_number(UserNo);
    return 0;
}

unsigned int cube_number(unsigned int numberOne)
{
    printf("the cube of %i  = %i ",numberOne,numberOne*numberOne*numberOne);
    return 1 ;
}

