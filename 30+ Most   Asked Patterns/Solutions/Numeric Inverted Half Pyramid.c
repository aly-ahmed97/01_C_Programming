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
	else
	{
		for(Index1 = UserNo ; Index1 >= 1 ; Index1--)
		{
			for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
			{
				printf("%i",Index2);
			}
			printf("\n");
		}
	}
}
