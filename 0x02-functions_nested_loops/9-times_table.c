#include "main.h"

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
		for (int x = 0; x <= 9; x++)
		{
			num = i * x;
			printf("%d", num);

			if (x < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
		i++;
	}
}
