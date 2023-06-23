#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int old_value = 1, new_value = 2;
	int sum = 0, sum_total = 0;

	while (sum < 4000000)
	{
		sum = old_value + new_value;

		if (sum % 2 == 0)
		{
			sum_total += sum;
		}

		old_value = new_value;
		new_value = sum;
	}
	printf("%d\n", sum_total + 2);

	return (0);
}
