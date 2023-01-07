#include <stdio.h>
#include <math.h>
unsigned int Armstrong_Number(unsigned int numberOne);
unsigned int Perfect_Number(unsigned int numberOne);
int main()
{
    unsigned int numberOne = 0;
    printf("please enter A Number :\n");
    scanf("%i",&numberOne);
    Armstrong_Number(numberOne);
    Perfect_Number(numberOne);
    return 0;
}
unsigned int Armstrong_Number(unsigned int numberOne)
{
    unsigned int Number = numberOne ;
    unsigned int index = 0 ;
    unsigned int counter= 0 ;
    unsigned int reminder = 0;
    unsigned int result = 0 ;
    while(Number)
    {
        Number /= 10 ;
        counter++ ;
    }
    Number = numberOne ;
    while(Number)
    {
        reminder = Number % 10 ;
        result += pow(reminder,counter) ;
        Number /= 10 ;
    }
    if(result == numberOne)
    {
        printf("No %i is an Armstrong Number\n",numberOne);
    }
    else
    {
        printf("No %i is not an Armstrong Number\n",numberOne);
    }
    return  1;
}
unsigned int Perfect_Number(unsigned int numberOne)
{
    unsigned int factor = 2 ;
    unsigned int result = 1 ;
    while(factor < numberOne)
    {
        if(numberOne % factor == 0)
        {
            result += factor ;
        }
        else
        {
            //nothing
        }
        factor++;
    }
    if(result == numberOne)
    {
        printf("No %i is a Perfect Number\n",numberOne);
    }
    else
    {
        printf("No %i is not a Perfect Number\n",numberOne);
    }
    return 1 ;
}
