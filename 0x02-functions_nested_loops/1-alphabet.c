#include "main.h"

/**
 * print_alphabet - Print alphabet in lower case using only `putchar`
 * Description: You can only use _putchar twice in your code
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
