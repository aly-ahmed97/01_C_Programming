#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int LastNo = 0;
    unsigned int Counter = 1;
    printf("please enter the Last Number:\n");
    scanf("%i",&LastNo);
    for(Index1 = 1 ; Index1 <= LastNo ; Index1++)
    {
        for(Index2 = 1 ; Index2 <= Counter ; Index2++)
        {
            printf("%i", Index1);
            if(Index2 != Index1)
            {
               printf("*");
            }
        }
        Counter++;
    printf("\n");
    }
    Counter-=2;
    for(Index1 = LastNo-1 ; Index1 >= 1 ; Index1--)
    {
        for(Index2 = 1 ; Index2 <= Counter ; Index2++)
        {
            printf("%i", Index1);
            if(Index2 != Index1)
            {
               printf("*");
            }
        }
        Counter--;
    printf("\n");
    }
    return 0;
}
