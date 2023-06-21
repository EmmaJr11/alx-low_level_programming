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
		while (x <= 9)
		{
			num = i * x;
			_putchar(num + '0');

			if (x < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			x++;
		}
		_putchar('\n');
		i++;
	}
}
