#include <stdio.h>
#include <math.h>
unsigned int Prime_Armstrong_Perfect(unsigned int numberOne);
unsigned Prime_Number(unsigned int numberOne);
unsigned Armstrong_Number(unsigned int numberOne);
unsigned Perfect_Number(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    printf("please enter a number:\n");
    scanf("%i",&UserNo);
    Prime_Armstrong_Perfect(UserNo);
    return 0;
}

unsigned int Prime_Armstrong_Perfect(unsigned int numberOne)
{
    Prime_Number(numberOne);
    Armstrong_Number(numberOne);
    Perfect_Number(numberOne);
    return 1 ;
}
unsigned Prime_Number(unsigned int numberOne)
{
    unsigned int index = 0 ;
    unsigned int flag = 1 ;
    if(0 == numberOne || 1 == numberOne)
    {
        //nothing
    }
    else
    {
        for(index  = numberOne-1 ; index > 1 ; index--)
        {
            if(0 == numberOne % index)
            {
                flag =  0;
            }
            else
            {
                //nothing
            }
        }
    }
    if(flag)
    {
        printf("number %i is a prime number\n",numberOne);
    }
    else
    {
        printf("number %i is not a prime number\n",numberOne);
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
        printf("number %i is an Armstrong Number\n",numberOne);
    }
    else
    {
        printf("number %i is not an Armstrong Number\n",numberOne);
    }
    return 1 ;
}
unsigned Perfect_Number(unsigned int numberOne)
{
    unsigned int index = 0;
    unsigned int result = 0;
    for(index = 1 ; index < numberOne ; index++)
    {
        if(0 == numberOne % index)
        {
            result += index ;
        }
    }
    if(result == numberOne)
    {
        printf("number %i is a Perfect Number\n",numberOne);
    }
    else
    {
        printf("number %i is not a Perfect Number\n",numberOne);
    }
    return 1 ;
}
