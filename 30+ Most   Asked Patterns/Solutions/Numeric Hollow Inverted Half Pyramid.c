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
        for(Index2 = Index1 ; Index2 <= UserNo ; Index2++)
        {
            if(Index2 == Index1 || Index2 == UserNo || Index1 == 1)
            {
              printf("%i",Index2);
            }
            else
            {
                printf(" ",Index2);
            }
        }
        printf("\n");
    }
    return 0;
}
