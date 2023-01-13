#include <stdio.h>
unsigned int Power(unsigned int number,unsigned int pwr);
int main()
{
    unsigned int UserNo  = 0;
    unsigned int UserPwr = 0;
    unsigned int result  = 0;
    printf("please enter a number and a power :\n");
    scanf("%i %i",&UserNo,&UserPwr);
    result = Power(UserNo,UserPwr);
    printf("%i to the power %i = %i",UserNo,UserPwr,result);
    return 0;
}
unsigned int Power(unsigned int number,unsigned int pwr)
{
    unsigned result = number ;
    if(0 == pwr)
    {
       return 1;
    }
    else
    {
        result *= Power(number,pwr-1) ;
    }
    return result ;
}
