#include <stdio.h>

unsigned int GSD(unsigned int numberOne,unsigned int numberTwo);
int main()
{
    unsigned int UserNo1 = 0;
    unsigned int UserNo2 = 0;
    unsigned int result = 0;
    printf("please enter two numbers :\n");
    scanf("%i %i",&UserNo1,&UserNo2);
    result = GSD(UserNo1,UserNo2);
    printf("result = %i",result);
    return 0;
}
unsigned int GSD(unsigned int numberOne,unsigned int numberTwo)
{
    if(0 == numberTwo)
    {
        return numberOne;
    }
    else
    {
       return GSD(numberTwo,numberOne%numberTwo) ;
    }
}


