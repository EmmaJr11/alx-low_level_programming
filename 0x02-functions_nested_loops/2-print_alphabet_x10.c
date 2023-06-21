#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times.
 * Description: print alphabet in lowercase 10 times.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
