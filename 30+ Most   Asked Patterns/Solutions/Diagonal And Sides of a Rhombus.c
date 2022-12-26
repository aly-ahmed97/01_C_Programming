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
        for(Index2 = UserNo ; Index2 > Index1 ; Index2--)
        {
            printf(" ");
        }
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            if(Index2 == 1 || Index2 == Index1 || Index1 == UserNo)
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(Index2 = 2 ; Index2 <= Index1 ; Index2++)
        {
            if(Index2 == Index1 || Index1 == UserNo)
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
    {
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf(" ");
        }
        for(Index2 = UserNo-1 ; Index2 >= Index1 ; Index2--)
        {
            if(Index2 == Index1 || Index2 == UserNo-1)
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(Index2 = UserNo-2 ; Index2 >= Index1 ; Index2--)
        {
            if(Index2 == Index1 )
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
