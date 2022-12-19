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
	    unsigned int counter = 1 ;
		for(Index1 = 1 ; Index1 <= UserNo ; Index1++)
		{
			for(Index2 = Index1 ; Index2 <= UserNo-1 ; Index2++)
			{
				printf(" ");

			}
			for(Index2 = Index1 ; Index2 <= counter ; Index2++)
			{
				printf("%i",Index2);
			}
			counter += Index1;
			printf("\n");
		}
	}
}
