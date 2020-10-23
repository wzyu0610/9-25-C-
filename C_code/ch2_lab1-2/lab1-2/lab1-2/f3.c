#include <stdio.h>
#include <stdlib.h>

int f3()
{
	int i,j,temp, temp2;
	printf("(3)\n");
	temp = 4;
	temp2 = 5;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < 5 && j == temp)
			{
				printf("X");
				temp--;
			}
			else if (i < 5 && j == temp2)
			{
				printf("X");
			}
			else if (i == 4)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		temp2++;
		printf("\n");
	}
	return 0;
	}
