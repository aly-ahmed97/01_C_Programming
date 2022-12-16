#include <stdio.h>

int main()
{
	unsigned int UserNo = 0 ;
	unsigned int Index1 = 0 ;
	unsigned int Index2 = 0 ;
	printf("please enter a number\n");
	scanf("%i",&UserNo);
	if(UserNo <= 0)
	{
		printf("not a valid number");
	}
	else if(UserNo  == 1)
    {
        printf("*");
    }
	else
	{
		for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
		{
			printf("*");
			for(Index2 = UserNo-2 ; Index2 >= Index1 ; Index2--)
			{
				if(Index1 == 1 || Index1 == UserNo)
				{
				    printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(Index1 != UserNo)
            {
                printf("*\n");
            }
		}
	}
}
