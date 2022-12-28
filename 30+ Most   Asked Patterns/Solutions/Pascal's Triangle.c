#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int Rows = 0;
    unsigned int Counter = 1;
    printf("please enter the Number of Rows :\n");
    scanf("%i",&Rows);
    for(Index1 = 0 ; Index1 < Rows ; Index1++)
    {
        for(Index2 = 0 ; Index2 <= Index1 ; Index2++)
        {
            if(Index1 == 0 || Index2 == 0)
            {
                Counter = 1 ;
            }
            else
            {
               Counter = Counter * (Index1-Index2+1)/Index2 ;
            }
            printf("%i", Counter);
        }
    printf("\n");
    }
    return 0;
}
