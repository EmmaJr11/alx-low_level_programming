#include <stdio.h>

/**
 * main - main block
 * Description: use `putchar` to print lowercase and then uppercase alphabets.
 * Return: 0
 */
int main(void)
{
	char upperCase = 'A';
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');

	return (0);
}
