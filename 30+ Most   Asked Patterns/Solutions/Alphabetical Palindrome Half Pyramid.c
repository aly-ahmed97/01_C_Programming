#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int UserNo = 0;
    unsigned int Counter = 0;
    printf("please enter the number of raws :\n");
    scanf("%i",&UserNo);
    for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
    {
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("%c",Index2+64);
            Counter = Index2-1 ;
        }
        for(Index2 = Counter ; Index2 >= 1 ; Index2--)
        {
            printf("%c",Index2+64);
        }
        printf("\n");
    }
    return 0;
}
