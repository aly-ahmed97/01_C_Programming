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
		for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
		{
			for(Index2 = 1 ; Index2 <= UserNo ; Index2++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}