#include <stdio.h>

int main()
{
    unsigned int Index1 = 0;
    unsigned int Index2 = 0;
    unsigned int UserNo = 0;
    printf("please enter the number of raws :\n");
    scanf("%i",&UserNo);
    for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
    {
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("*");
        }
        for(Index2 = Index1*2 ; Index2 < UserNo*2 ; Index2++)
        {
            printf(" ");
        }

        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
    {
        for(Index2 = UserNo ; Index2 > Index1 ; Index2--)
        {
            printf("*");
        }
        for(Index2 = 1 ; Index2 <= Index1*2 ; Index2++)
        {
            printf(" ");
        }

        for(Index2 = UserNo ; Index2 > Index1 ; Index2--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
