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
	    UserNo *= 2 ;
		for(Index1 = 1 ; Index1 <= UserNo ; Index1+=2)
		{
			for(Index2 = Index1+2 ; Index2 <= UserNo ; Index2+=2)
			{
				printf(" ");

			}
			for(Index2 = 1 ; Index2 <= Index1 ; Index2++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
