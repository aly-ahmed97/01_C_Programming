#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int LastNo = 0;
    unsigned int Counter = 0 ;
    printf("please enter the Last Number:\n");
    scanf("%i",&LastNo);
    printf("*\n");
    for(Index1 = 1 ; Index1 <= LastNo ; Index1++)
    {
        printf("*");
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("%i", Index2);
            Counter = Index2-1 ;
        }
        for(Index2 = Counter ; Index2 >= 1 ; Index2--)
        {
            printf("%i", Index2);
        }
    printf("*\n");
    }
    for(Index1 = LastNo-1 ; Index1 >= 1 ; Index1--)
    {
        printf("*");
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("%i", Index2);
            Counter = Index2-1 ;
        }
        for(Index2 = Counter ; Index2 >= 1 ; Index2--)
        {
            printf("%i", Index2);
        }
    printf("*\n");
    }
    printf("*\n");
    return 0;
}
