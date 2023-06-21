#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int i;
	int num;

	while (i <= 9)
	{
		int x = 1;
		while (x <= 9)
		{
			num = i * x;
			printf("%d", num);

			if (x < 9)
			{
				printf(", ");
			}
			x++;
		}
		printf("\n");
		i++;
	}
}
