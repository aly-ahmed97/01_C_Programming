#include <stdio.h>
int sum(int numberone,int numberTwo);
int main()
{
    unsigned int numberOne = 0;
    unsigned int numberTwo = 0;
    unsigned int Result = 0;
    printf("please enter the First Number :\n");
    scanf("%i",&numberOne);
    printf("please enter the Second Number :\n");
    scanf("%i",&numberTwo);
    Result = sum(numberOne,numberTwo);
    printf("Result = %i",Result);
    return 0;
}
int sum(int numberOne,int numberTwo)
{
    return numberOne+numberTwo ;
}
