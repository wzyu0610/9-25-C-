#include <stdio.h>
#include <stdlib.h>

int f2()
{
	int i, j;
	printf("(2)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || i == 1 || i == 2 || i == 7 || i == 8 || j == 0 || j == 1 || j == 2 || j == 8 || j == 7 || j == 9)
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