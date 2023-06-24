#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */
void print_square(int size)
{
	int i = 0;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			putchar('\n');
			i++;
		}
	}
}
