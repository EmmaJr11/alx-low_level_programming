#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase, followed by a new line
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
