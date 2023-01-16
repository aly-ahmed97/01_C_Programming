#include <stdio.h>

unsigned int Min_Max(unsigned int numberOne,unsigned int numberTwo);

int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    printf("please enter two numbers :\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    Min_Max(UserNo1,UserNo2);
    return 0;
}

unsigned int Min_Max(unsigned int numberOne,unsigned int numberTwo)
{
    if(numberOne > numberTwo)
    {
        printf("Max = %i \nMin = %i",numberOne,numberTwo);
    }
    else
    {
        printf("Max = %i \nMin = %i",numberTwo,numberOne);
    }
    return 1 ;
}