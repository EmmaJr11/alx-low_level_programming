#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int old_value = 1, new_value = 2;
	long int sum = 0;

	printf("%lu, ", old_value);
	printf("%lu, ", new_value);

	while (count <= 50)
	{
		sum = old_value + new_value;
		printf("%lu", sum);

		if (count < 50)
		{
			putchar(44);
			putchar(32);
		}

		old_value = new_value;
		new_value = sum;
		count++;
	}

	return (0);
}
