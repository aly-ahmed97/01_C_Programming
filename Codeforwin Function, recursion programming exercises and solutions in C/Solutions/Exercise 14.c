#include <stdio.h>
unsigned int even_Sum(unsigned int lower_Number,unsigned int higher_Number);
int main()
{
    unsigned int lower_Number = 0;
    unsigned int higher_Number = 0;
    unsigned int result = 0 ;
    printf("please enter a numbers range :\n");
    scanf("%i %i",&lower_Number,&higher_Number);
    result = even_Sum(lower_Number,higher_Number);
    printf("sum = %i",result);
    return 0;
}
unsigned int even_Sum(unsigned int lower_Number,unsigned int higher_Number)
{
    if(lower_Number > higher_Number)
    {
        return 0;
    }
    else
    {
        if(0 == lower_Number%2)
        {
            return lower_Number + even_Sum(lower_Number+2,higher_Number);
        }
        else
        {
            even_Sum(lower_Number+1,higher_Number);
        }
    }

}
