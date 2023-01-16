#include <stdio.h>

unsigned int Perfect_Range(unsigned int numberOne,unsigned int numberTwo);
unsigned Perfect_Number(unsigned int numberOne);
int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    printf("please enter a numbers range:\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    Perfect_Range(UserNo1,UserNo2);
    return 0;
}

unsigned int Perfect_Range(unsigned int numberOne,unsigned int numberTwo)
{
    unsigned int index = 0;
    for(index = numberOne ; index <= numberTwo ; index++)
    {
        Perfect_Number(index);
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
        printf("%i\t",numberOne);
    }
    else
    {
       //nothing
    }
    return 1 ;
}
