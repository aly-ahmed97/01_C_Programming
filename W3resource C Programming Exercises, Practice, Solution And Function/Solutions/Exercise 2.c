#include <stdio.h>
int square(int numberOne);
int main()
{
    unsigned int numberOne = 0;
    unsigned int Result = 0;
    printf("please enter the Number :\n");
    scanf("%i",&numberOne);
    Result = square(numberOne);
    printf("Result = %i",Result);
    return 0;
}
int square(int numberOne)
{
    return numberOne * numberOne ;
}
