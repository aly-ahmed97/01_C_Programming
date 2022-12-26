#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int UserNo = 0;
    unsigned int Counter = 1;
    unsigned int Last = 1;
    printf("please enter the number of raws :\n");
    scanf("%i",&UserNo);
    for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
    {
        for(Index2 = Counter ; Index2 <= Last ; Index2++)
        {
            printf("%i",Index2);
            Counter++;
        }
        Last = Counter + Index1 ;
        printf("\n");
    }
    return 0;
}
