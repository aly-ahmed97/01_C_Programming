#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int FirstNo = 0;
    unsigned int SecondNo = 0;
    unsigned int Counter = 1;
    printf("please enter the First Number:\n");
    scanf("%i",&FirstNo);
    printf("please enter the Second Number:\n");
    scanf("%i",&SecondNo);
    for(Index1 = FirstNo ; Index1 <= SecondNo ; Index1++)
    {
        for(Index2 = 1 ; Index2 <= Counter ; Index2++)
        {
            printf("%i", Index1);
        }
        Counter++;
    printf("\n");
    }
    Counter-=2;
    for(Index1 = SecondNo-1 ; Index1 >= FirstNo ; Index1--)
    {
        for(Index2 = 1 ; Index2 <= Counter ; Index2++)
        {
            printf("%i", Index1);
        }
        Counter--;
    printf("\n");
    }
    return 0;
}
