#include <stdio.h>
#include <stdlib.h>

int f1()
{
	int i, j;
	printf("(1)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}	return 0;
}