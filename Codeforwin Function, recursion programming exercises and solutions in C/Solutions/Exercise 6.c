#include <stdio.h>
#include <math.h>
unsigned int Prime_Range(unsigned int numberOne,unsigned int numberTwo);
unsigned Prime_Number(unsigned int numberOne);
int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    printf("please enter a numbers range:\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    Prime_Range(UserNo1,UserNo2);
    return 0;
}

unsigned int Prime_Range(unsigned int numberOne,unsigned int numberTwo)
{
    unsigned int index = 0;
    for(index = numberOne ; index <= numberTwo ; index++)
    {
        Prime_Number(index);
    }
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
        printf("%i\t",numberOne);
    }
    else
    {
        //nothing
    }
    return 1 ;
}
