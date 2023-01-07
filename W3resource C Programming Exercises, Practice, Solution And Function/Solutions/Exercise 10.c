#include <stdio.h>
unsigned int Perfect_Number(unsigned int numberOne);
unsigned int Perfect_Number_Range(const unsigned int numberOne,const unsigned int numberTwo);
int main()
{
    unsigned int numberOne = 0;
    unsigned int numberTwo = 0 ;
    printf("please enter A Number range :\n");
    scanf("%i %i",&numberOne,&numberTwo);
    Perfect_Number_Range(numberOne,numberTwo);
    return 0;
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
    if(result == numberOne && numberOne != 1 && numberOne != 0)
    {
        printf("%i ",numberOne);
    }
    else
    {
        //nothing
    }
    return 1 ;
}
unsigned int Perfect_Number_Range(const unsigned int numberOne,const unsigned int numberTwo)
{
    unsigned int index = 0 ;
    for(index = numberOne ; index <= numberTwo ; index++)
    {
        Perfect_Number(index);
    }
}
