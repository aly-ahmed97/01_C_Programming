#include <stdio.h>
unsigned int Print_Range(unsigned int lower_Number,unsigned int higher_Number);
int main()
{
    unsigned int lower_Number = 0;
    unsigned int higher_Number = 0;
    printf("please enter a numbers range:\n");
    scanf("%i %i",&lower_Number,&higher_Number);
    Print_Range(lower_Number,higher_Number);
    return 0;
}
unsigned int Print_Range(unsigned int lower_Number,unsigned int higher_Number)
{
    if(lower_Number > higher_Number)
    {
        return 1 ;
    }
    else
    {
        printf("%i\t",lower_Number);
        Print_Range(lower_Number+1,higher_Number);
    }
}
