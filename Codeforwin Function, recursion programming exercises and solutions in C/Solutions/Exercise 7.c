#include <stdio.h>

unsigned int Strong_Range(unsigned int numberOne,unsigned int numberTwo);
unsigned Strong_Number(unsigned int numberOne);
unsigned factorial(unsigned int numberOne);
int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    printf("please enter a numbers range:\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    Strong_Range(UserNo1,UserNo2);
    return 0;
}

unsigned int Strong_Range(unsigned int numberOne,unsigned int numberTwo)
{
    unsigned int index = 0;
    for(index = numberOne ; index <= numberTwo ; index++)
    {
        Strong_Number(index);
    }
    return 1 ;
}
unsigned Strong_Number(unsigned int numberOne)
{
    unsigned int units = 0;
    unsigned int number = numberOne ;
    unsigned int index = 0;
    unsigned int result = 0;
    unsigned int reminder = 0 ;
    if(0 == number)
    {
        units = 1 ;
    }
    while(number)
    {
        units++;
        number/= 10 ;
    }
    number = numberOne ;
    while(number)
    {
        reminder = number % 10 ;
        result += factorial(reminder);
        number/= 10 ;
    }
    if(result == numberOne)
    {
        printf("%i\t",numberOne);
    }
    else
    {
       //nothing
    }
    return 1 ;
}
unsigned factorial(unsigned int numberOne)
{
    if(numberOne == 0 )
    {
        return 1;
    }
    else
    {
        return numberOne * factorial(numberOne-1);
    }
}
