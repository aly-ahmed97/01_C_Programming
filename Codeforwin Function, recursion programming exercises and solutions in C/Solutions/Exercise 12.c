#include <stdio.h>
unsigned int even_Or_odd(unsigned int lower_Number,unsigned int higher_Number,unsigned char val);
int main()
{
    unsigned int lower_Number = 0;
    unsigned int higher_Number = 0;
    unsigned int val = '0';
    printf("please enter a numbers range and E for even or O for odd:\n");
    scanf("%i %i %c",&lower_Number,&higher_Number,&val);
    even_Or_odd(lower_Number,higher_Number,val);
    return 0;
}
unsigned int even_Or_odd(unsigned int lower_Number,unsigned int higher_Number,unsigned char val)
{
    if(lower_Number > higher_Number)
    {
        return 1 ;
    }
    else
    {
        if(val == 'E')
        {
            if(0 == lower_Number%2)
            {
                printf("%i\t",lower_Number);
            }
            else
            {
                //nothing
            }
        }
        else if(val == 'O')
        {
            if(0 != lower_Number%2)
            {
                printf("%i\t",lower_Number);
            }
            else
            {
                //nothing
            }
        }
        else
        {
            //nothing
        }
        even_Or_odd(lower_Number+1,higher_Number,val);
    }
}
