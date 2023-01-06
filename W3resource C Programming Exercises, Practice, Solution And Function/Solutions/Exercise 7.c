#include <stdio.h>
unsigned int Prime_Number(unsigned int numberOne);
int main()
{
    unsigned int numberOne = 0;
    printf("please enter A Number :\n");
    scanf("%i",&numberOne);
    Prime_Number(numberOne);
    return 0;
}
unsigned int Prime_Number(unsigned int numberOne)
{
    unsigned short int flag = 0 ;
    unsigned int index = 0 ;
    for(index = 2 ; index < numberOne ; index ++)
    {
        if(numberOne == 0 || numberOne == 1)
        {
            flag = 1 ;
        }
        else if(numberOne % index == 0)
        {
            printf("test\n");
            flag = 1 ;
            break;
        }
        else
        {
            //nothing
        }
    }
    if(flag)
    {
        printf("No %i is not a prime number",numberOne);
    }
    else
    {
        printf("No %i is a prime number",numberOne);
    }
}
