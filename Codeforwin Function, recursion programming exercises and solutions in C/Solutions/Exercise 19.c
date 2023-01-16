#include <stdio.h>

unsigned int Fibonacci(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    unsigned int result = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    result = Fibonacci(UserNo);
    printf("result = %i",result);
    return 0;
}
unsigned int Fibonacci(unsigned int numberOne)
{
    if(numberOne == 0 )
    {
        return 0;
    }
    else if(numberOne == 1 )
    {
        return 1;
    }
    else
    {
       return Fibonacci(numberOne-1) + Fibonacci(numberOne-2) ;
    }
}

