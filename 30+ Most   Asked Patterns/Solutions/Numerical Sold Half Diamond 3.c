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
            printf("%i", Index1);
            if(Index2 != Index1)
            {
               printf("*");
            }
        }
    printf("\n");
    }
    for(Index1 = UserNo ; Index1 >= 1 ; Index1--)
    {
        for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
        {
            printf("%i", Index1);
            if(Index2 != Index1)
            {
               printf("*");
            }
        }
    printf("\n");
    }
    return 0;
}
