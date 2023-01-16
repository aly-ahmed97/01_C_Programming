#include <stdio.h>

unsigned int Sum_Digit(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    unsigned int result = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    result = Sum_Digit(UserNo);
    printf("result = %i",result);
    return 0;
}
unsigned int Sum_Digit(unsigned int numberOne)
{
    unsigned int result = 0 ;
    if(numberOne == 0 )
    {
        return 0;
    }
    else
    {
       return result + numberOne%10 + Sum_Digit(numberOne/10);
    }
}

