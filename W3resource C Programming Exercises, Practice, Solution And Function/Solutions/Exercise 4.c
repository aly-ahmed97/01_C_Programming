#include <stdio.h>
int Odd_Or_Even(unsigned int numberOne);
int main()
{
    unsigned int numberOne = 0;
    printf("please enter A Number :\n");
    scanf("%i",&numberOne);
    Odd_Or_Even(numberOne);
    return 0;
}
int Odd_Or_Even(unsigned int numberOne)
{
    if(numberOne%2 == 0)
    {
        printf("The Entered Number Is Even");
    }
    else
    {
        printf("The Entered Number Is Odd");
    }
    return 1 ;
}
