#include <stdio.h>
#include <math.h>
unsigned int Armstrong_Range(unsigned int numberOne,unsigned int numberTwo);
unsigned Armstrong_Number(unsigned int numberOne);
int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    printf("please enter a numbers range:\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    Armstrong_Range(UserNo1,UserNo2);
    return 0;
}

unsigned int Armstrong_Range(unsigned int numberOne,unsigned int numberTwo)
{
    unsigned int index = 0;
    for(index = numberOne ; index <= numberTwo ; index++)
    {
        Armstrong_Number(index);
    }
    return 1 ;
}
unsigned Armstrong_Number(unsigned int numberOne)
{
    unsigned int units = 0;
    unsigned int index = 0 ;
    unsigned int number = numberOne ;
    unsigned int result = 0 ;
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
        result += pow(reminder,units);
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
