#include <stdio.h>

unsigned int Palindrome(unsigned int numberOne);
unsigned int reverse(unsigned int numberOne);
int main()
{
    unsigned int UserNo = 0;
    printf("please enter a number :\n");
    scanf("%i",&UserNo);
    Palindrome(UserNo);
    return 0;
}
unsigned int reverse(unsigned int numberOne)
{
    unsigned int reversed_number = 0 ;
    while(numberOne)
    {
        reversed_number += (numberOne % 10) ;
        numberOne /= 10 ;
        if(numberOne)
        {
            reversed_number *= 10 ;
        }
        else
        {
            //nothing
        }
    }
    return reversed_number ;
}
unsigned int Palindrome(unsigned int numberOne)
{
    if(reverse(numberOne) == numberOne)
    {
        printf("no. %i is a Palindrome number",numberOne);
    }
    else
    {
        printf("no. %i is  not a Palindrome number",numberOne);
    }
    return 1;
}

