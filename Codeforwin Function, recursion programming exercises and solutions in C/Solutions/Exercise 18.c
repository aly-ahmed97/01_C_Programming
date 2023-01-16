#include <stdio.h>

unsigned int Factorial(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    unsigned int result = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    result = Factorial(UserNo);
    printf("result = %i",result);
    return 0;
}
unsigned int Factorial(unsigned int numberOne)
{
    if(numberOne == 0 )
    {
        return 1;
    }
    else
    {
       return numberOne * Factorial(numberOne-1);
    }
}

