#include <stdio.h>
unsigned int To_Binary(unsigned int numberOne);
int main()
{
    unsigned int numberOne = 0;
    unsigned int result = 0 ;
    printf("please enter A Number :\n");
    scanf("%i",&numberOne);
    To_Binary(numberOne);
    return 0;
}
unsigned int To_Binary(unsigned int numberOne)
{
    unsigned int temp = 0 ;
    unsigned int result = 0 ;
    unsigned int dec = 1 ;
    while(numberOne)
    {
        temp = numberOne % 2 ;
        numberOne /= 2 ;
        result += temp *  dec ;
        dec *= 10 ;
    }
    printf("your number in binary = %i\n",result);
}
