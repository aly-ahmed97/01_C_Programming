#include <stdio.h>
unsigned int Sum_Range(unsigned int lower_Number,unsigned int higher_Number);
int main()
{
    unsigned int lower_Number = 0;
    unsigned int higher_Number = 0;
    unsigned int result = 0;
    printf("please enter a numbers range\n");
    scanf("%i %i",&lower_Number,&higher_Number);
    result = Sum_Range(lower_Number,higher_Number);
    printf("%i",result);
    return 0;
}
unsigned int Sum_Range(unsigned int lower_Number,unsigned int higher_Number)
{
    if(lower_Number > higher_Number)
    {
        return 0;
    }
    else
    {
        return lower_Number + Sum_Range(lower_Number+1,higher_Number);
    }
}
