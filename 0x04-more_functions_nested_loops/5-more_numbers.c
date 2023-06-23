#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
			}
			i++;
		}
		n++;
	}
	_putchar('\n');
}
