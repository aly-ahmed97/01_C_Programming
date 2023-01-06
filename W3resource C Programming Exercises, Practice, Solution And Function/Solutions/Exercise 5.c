#include <stdio.h>
unsigned int Sum_Factorial(unsigned int numberOne);
unsigned int Factorial(unsigned int numberOne);
int main()
{
    unsigned int numberOne = 0;
    unsigned int result = 0 ;
    printf("please enter A Number :\n");
    scanf("%i",&numberOne);
    result = Sum_Factorial(numberOne);
    printf("Result = %i",result);
    return 0;
}
unsigned int Sum_Factorial(unsigned int numberOne)
{
    if(numberOne >= 1)
    {
        return (Factorial(numberOne) / numberOne) + Sum_Factorial(numberOne-1);
    }
    else
    {
        return 0 ;
    }
}
unsigned int Factorial(unsigned int numberOne)
{
    if(numberOne >= 1 )
    {
        return numberOne * Factorial(numberOne-1) ;
    }
    else
    {
        return 1;
    }
}
